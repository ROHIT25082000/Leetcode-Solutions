class Solution {
public:
    unordered_set<string> ispalin; 
    unordered_set<string> notpalin; 
    bool isPalindrome(string & res) 
    {
        if(ispalin.find(res) != ispalin.end()) {
            return true;
        }
        if(notpalin.find(res) != notpalin.end()) {
            return false; 
        }
        for(int i = 0; i < res.length()/2; ++i) 
        {
            if(res[i] != res[res.length()-i-1]) {
                notpalin.insert(res); 
                return false; 
            }
        }
        ispalin.insert(res); 
        return true; 
    }
    
    void solve(string s, vector<vector<string>> & res, vector<string> partition)
    {
        if(s.length() == 0) {
            res.push_back(partition); 
            return;
        } 
        for(int i = 0; i < s.length(); ++i)
        {
            string curr = s.substr(0,i+1); 
            if(isPalindrome(curr)) {
                string remaining = s.substr(i+1);
                partition.push_back(curr);
                solve(remaining, res, partition); 
                partition.pop_back();
            }
        }
    }
    
    vector<vector<string>> partition(string s) {
        vector<vector<string>> res; 
        vector<string> partition;  
        solve(s, res, partition);  
        return res;  
    }
};
