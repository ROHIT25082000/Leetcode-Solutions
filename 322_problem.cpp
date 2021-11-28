class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        int val = amount+1;  
        int dp[val]; 
        for(int i = 0; i <= amount; ++i) {
            dp[i] = INT_MAX;
        }
        dp[0] = 0;  
        
        for(int i = 1; i <= amount; ++i) {
            for(int j = 0; j < coins.size(); ++j) {
                if(coins[j] <= i) {
                    int temp = dp[i-coins[j]];
                    if(temp != INT_MAX) {
                        dp[i] = min(dp[i], 1 + temp); 
                    }
                }   
                
            }
        }
        
        return dp[amount] == INT_MAX ? -1 : dp[amount] ;  
        
    }
};
