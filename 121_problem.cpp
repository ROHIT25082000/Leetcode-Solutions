class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;  
        int curr_val = INT_MAX;   
        for(int i = 0; i < prices.size(); ++i) {
            curr_val = min(curr_val, prices[i]);  
            if(curr_val < prices[i]) {
                profit = max(profit, prices[i] - curr_val); 
            }
        }
        return profit; 
        
    }
};
