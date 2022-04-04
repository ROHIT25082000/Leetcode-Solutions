class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int result = *max_element(nums.begin(), nums.end());  
        int curr_max = 1; 
        int curr_min = 1;  
        for(int i = 0; i < nums.size(); ++i) {
            int temp = curr_max; 
            curr_max = max({curr_max * nums[i], nums[i], curr_min * nums[i]}); 
            curr_min = min({temp * nums[i], curr_min * nums[i], nums[i]});  
            result = max(curr_max, result);  
        }
        return result; 
    }
};

