class Solution {
public:
    set<int> hash;  
    void solve(int i) {
        if(i % 10 == 9) {
            hash.insert(i); 
            return; 
        }
        hash.insert(i); 
        solve(10 * i + (i % 10 + 1)); 
    }
    
    vector<int> sequentialDigits(int low, int high) {
        for(int i = 1; i <= 9; ++i) {
            solve(i); 
        }
        vector<int> result; 
        for(auto node : hash) {
            if(low <= node && node <= high)
            {
                result.push_back(node);  
            }
        }
        
        
        return result; 
        
    }
};
