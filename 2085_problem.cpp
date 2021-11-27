class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        unordered_map<string,int> hash1; 
        for(auto s : words1) {
            hash1[s]++; 
        }
        unordered_map<string,int> hash2;  
        for(auto s : words2) {
            hash2[s]++;  
        }
        int count =0; 
        for(auto item : hash1) {
            if(item.second == 1 && hash2[item.first] == 1){ 
                count++; 
            }
        }
        return count;  
    }
};
