class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        
        int max_val = *max_element(nums.begin(), nums.end());          
        vector<int> dp(max_val+1,0);   
        int curr_sum = 0; 
        
        for(int i = 0; i < nums.size(); ++i)
            dp[nums[i]] += 1; 
        
        
        for(int i = 0; i < max_val+1; ++i) {
            curr_sum += dp[i];  
            dp[i] = curr_sum - dp[i]; 
        } 
        
        vector<int> result;  
        
        for(int i = 0; i < nums.size(); ++i) 
            result.push_back(dp[nums[i]]);  
        
        return result; 
    }
};
