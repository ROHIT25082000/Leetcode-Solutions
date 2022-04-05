class Solution {
public:
    int dp[5001][2]; 
    int solve(int index, int canBuy, vector<int> & prices) {
        if(index >= prices.size()) {
            return 0; 
        }
        if(dp[index][canBuy] != -1) 
            return dp[index][canBuy];  
        
        if(canBuy) {
            return dp[index][canBuy] = max(solve(index+1,canBuy, prices), -prices[index] + solve(index + 1, !canBuy, prices)); 
        } 
        return dp[index][canBuy] = max(solve(index+1,canBuy, prices), prices[index] + solve(index + 2, !canBuy, prices)); 
    }
    
    int maxProfit(vector<int>& prices) {
        if(prices.size() == 1)
            return 0;  
       
        memset(dp, -1, sizeof(dp)); 
        int index = 0; 
        int curr_val = 0; 
        int canBuy = 1; 
        return solve(index, canBuy, prices); 
    }
};
