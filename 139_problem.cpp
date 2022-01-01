class Solution {
public:
    
    int dp[301][301];  
    unordered_set<string> hashString;  
    
    int solve(string &s, int low, int high) {
        if(low > high) {
            return 0;
        }
        if(hashString.find(s.substr(low, high-low+1)) != hashString.end()) {
            return 1; 
        }
        
        if(dp[low][high] != -1) {
            return dp[low][high];  
        }  
        int ans = 0; 
        for(int i = low; i < high; ++i) {   
        
            int left = solve(s,low,i);  
            int right = solve(s,i+1,high); 
            dp[low][i] = left; 
            dp[i+1][high] = right; 
            if(left && right) {
                 return dp[low][high] = 1;  
            }
        }
        return dp[low][high] = ans;  
    }
    
    
    bool wordBreak(string s, vector<string>& wordDict) {
        memset(dp, -1, sizeof(dp));
        for(auto s : wordDict) {
            hashString.insert(s);  
        }     
        return solve(s, 0, s.length()-1) == 1;   
    }
};
