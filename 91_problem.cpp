class Solution {
public:
    int dp[101];  
    unordered_map<int,char> hash;  
    int solve(int index, string &s, unordered_map<int,char> &hash)  
    {   
        if(index > s.length()) 
            return 0; 
        if(index == s.length())
            return 1; 
        if(s[index] == '0') 
            return 0;  
        if(dp[index] != -1) 
            return dp[index]; 
        int sub1 = stoi(s.substr(index, 1));  
        int sub2 = stoi(s.substr(index, 2));
        int one = 0; 
        int two = 0; 
        
        if(hash.find(sub1) != hash.end()) {
            one = solve(index+1, s, hash); 
        }
        if(hash.find(sub2) != hash.end()) {
            two = solve(index+2,s,hash); 
        }        
        return dp[index] = one + two;  
    }
    
    int numDecodings(string s) {
        memset(dp, -1, sizeof(dp));  
        for(int i = 1; i <= 26; ++i) {
            hash[i] = 'A' + i - 1;   
        }  
        return solve(0,s, hash);   
    }
};
