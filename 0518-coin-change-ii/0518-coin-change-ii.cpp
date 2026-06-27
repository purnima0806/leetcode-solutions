class Solution {
public:
    int change(int amount, std::vector<int>& coins) {
        // Using unsigned int to prevent runtime error from signed integer overflow
        vector<unsigned int> dp(amount + 1, 0);
        
        // Base case
        dp[0] = 1;
        
        // Populate the DP table
        for (int coin : coins) {
            for (int i = coin; i <= amount; ++i) {
                dp[i] += dp[i - coin];
            }
        }
        
        // Cast back to int as required by the function signature
        return static_cast<int>(dp[amount]);
    }
};
