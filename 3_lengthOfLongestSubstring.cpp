#include <bits/stdc++.h>  

using namespace std;  

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length()-1;
        int i = 0; 
        int j = 0;  
        int result = 0;  
        
        vector<int> prev(256, -1);      
        while(j < s.length()) { 
            
            i = max(i, prev[s[j]]+1);
            int max_end = (j - i + 1);  
            result = max(max_end, result); 
            prev[s[j]] = j;  
            j++;  
        }
        return result; 
    }
};