class Solution {
public:
 int dp[46];
 int goal;
    int solve(int x){
        if(x>goal) return 0;//step hi aage chale gye to kuch mat store krke piche aao
        if(dp[x]!=-1) return dp[x];
        if(x==goal) return dp[x]=1;
        return dp[x]=solve(x+1)+solve(x+2);
    }
    
    int climbStairs(int n) {
        memset(dp,-1,sizeof(dp));
        goal=n;
        return solve(0);
    }
};