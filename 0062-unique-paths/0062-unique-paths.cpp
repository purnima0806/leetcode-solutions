class Solution {
public:
int x,y;
int dp[101][101];

    int solve(int m, int n){
        if(m<0||n<0||m>=x||n>=y) return 0;
        if(dp[m][n]!=-1) return dp[m][n];
        if(m==x-1&&n==y-1) return dp[m][n]=1;
        int right=solve(m,n+1);
        int down=solve(m+1,n);
        return dp[m][n]=right+down;
    }
    int uniquePaths(int m, int n) {
        memset(dp,-1,sizeof(dp));
        x=m;
        y=n;
       return solve(0,0);
    }
};