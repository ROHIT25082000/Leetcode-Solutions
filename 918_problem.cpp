// Idea : 
        /* 
            step 1 : Do the normal Kadanes Algo 
                -> get maximum subarray sum 
            
            step 2 : Modify for Kadanes Algo for minimum subarray sum 
                -> get minimum subarray sum. 
                why ?? Because total_sum - minimumSubarraySum takes care of circular condition
                            
            But one edge case what if all numbers are -ve then total_sum == minimumSubarraySum
                in that case neglect the circular condition return the Normal Kadanes Algo answer.  

        */ 


class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        
        int currSumMaximum = 0;  // local sum maximum
        int currSumMinimum = 0;  // local sum minimum 
        
        int max_sum = INT_MIN;  // global max_sum 
        int min_sum = INT_MAX;  // global min_sum 
        
        
        int total = 0; // for total sum of the array 
           
        for(int i = 0; i < nums.size(); ++i) {
            total += nums[i];  
            
            currSumMinimum = min(currSumMinimum + nums[i], nums[i]);   
            min_sum = min(currSumMinimum, min_sum);   
        
            currSumMaximum = max(currSumMaximum + nums[i], nums[i]);   
            max_sum = max(currSumMaximum, max_sum);  
        }
        
        if(min_sum == total) 
            return max_sum;  
        
        return max(max_sum, total - min_sum);   
    }
};
