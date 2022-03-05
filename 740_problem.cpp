class Solution {
public:
    int dp[20001];
    
    int solve(int index, int arr[], int max_val) {  
        if(index >= max_val + 1) {
            return 0;
        }
        if(dp[index] != -1) 
            return dp[index]; 
        return dp[index] = max(arr[index] + solve(index + 2, arr, max_val), solve(index + 1, arr, max_val));
    }
    int deleteAndEarn(vector<int>& nums) {
        int max_val = *max_element(nums.begin(), nums.end()); 
        int arr[max_val+1];    
        memset(arr, 0, sizeof(arr));  
        memset(dp, -1, sizeof(dp)); 
        for(int i = 0; i < nums.size(); ++i) {
            arr[nums[i]] += nums[i]; 
        }
        return solve(0, arr, max_val);   
    }
};
