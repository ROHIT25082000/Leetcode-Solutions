class Solution {
public:
    
    bool canSplit(int mid, int m, vector<int> & nums) {  
        int number_of_splits = 1; 
        int curr_sum = nums[0];  
        for(int i = 1; i < nums.size(); ++i) 
        {
            if(nums[i] > mid) {
                return false;
            }
            if(curr_sum + nums[i] <= mid) {
                curr_sum += nums[i];
            }else {
                curr_sum = nums[i]; 
                ++number_of_splits; 
            }
        }
        return number_of_splits <= m; 
    }
    
    int splitArray(vector<int>& nums, int m) {
        
        int low = *max_element(nums.begin(), nums.end());  
        int high = accumulate(nums.begin(), nums.end(), 0);   
        int ans = -1; 
        while(low <= high) 
        {
            int mid = (high - low)/2 + low;  
            if(canSplit(mid, m, nums)) {
                ans = mid; 
                high = mid - 1; 
            }else {
                low = mid + 1;  
            }
        }
        return ans; 
    }
};
