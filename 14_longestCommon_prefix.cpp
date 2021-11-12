class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(), strs.end());  
        string smallest = strs[0]; 
        string largest = strs[strs.size()-1]; 
        string res = ""; 
        for(int i = 0; i < smallest.size(); ++i) {
            if(smallest[i] == largest[i]) {
                res += smallest[i];
            }
            else {
                break;  
            }
        }
        return res; 
    }
};