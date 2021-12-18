class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> result;   
        list<int> window;   
        int i = 0; 
        int j = 0;   
        
        while(j < nums.size()) {
            
            if(window.empty()) {
                window.push_back(nums[j]);  
            }
            else {
                while(!window.empty() && window.back() < nums[j]) {
                    window.pop_back(); 
                }
                window.push_back(nums[j]); 
            }
            if(j - i + 1 == k) {
                result.push_back(window.front());  
                if(nums[i] == window.front()) {
                    window.pop_front();  
                }
                i++; 
            }        
            j++; 
        }
        return result; 
    }
};
