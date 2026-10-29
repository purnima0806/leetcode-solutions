class Solution {
public:
int dp[1001][1001];
int x,y;
    
    int solve(string& text1,string& text2,int i,int j){
        if(i>=x||j>=y) return 0;
        if(dp[i][j]!=-1) return dp[i][j];
        if(text1[i]==text2[j]) return dp[i][j]=1+solve(text1,text2,i+1,j+1);
        int I=solve(text1,text2,i+1,j);
        int J=solve(text1,text2,i,j+1);
        return dp[i][j]=max(I,J);
    }
    int longestCommonSubsequence(string text1, string text2) {
        memset(dp,-1,sizeof(dp));
        x=text1.length();
        y=text2.length();
        return solve(text1,text2,0,0);
    }
};