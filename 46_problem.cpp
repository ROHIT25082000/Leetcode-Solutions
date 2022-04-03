class Solution {
public: 
    
    void solve(vector<vector<int>> & result, vector<int> curr, vector<int> &visited, int index, vector<int> & nums) {
        if(index == nums.size()) {
            result.push_back(curr); 
            return; 
        }
        for(int i = 0; i < nums.size(); ++i) {
            if(visited[i] == 0) {
                visited[i] = 1;  
                curr.push_back(nums[i]); 
                solve(result, curr, visited, index + 1, nums);  
                curr.pop_back();  
                visited[i] = 0; 
            }
        }
    }
    
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> result;
        vector<int> curr;  
        vector<int> visited(nums.size(), 0);   
        int index = 0; 
        solve(result, curr, visited, index, nums);  
        return result;  
    }
};
