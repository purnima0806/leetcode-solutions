class Solution {
public:
int dp[1001];
int n;
 int solve(vector<int>&cost,int x){
    if(x>=n) return 0;
    if(dp[x]!=-1) return dp[x];
    return dp[x]=cost[x]+min(solve(cost,x+1),solve(cost,x+2));
 }
    int minCostClimbingStairs(vector<int>& cost) {
        memset(dp,-1,sizeof(dp));
        n=cost.size();
        return min(solve(cost,0),solve(cost,1));
    }
};