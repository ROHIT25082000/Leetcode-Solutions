class Solution {
public:
    string reversePrefix(string word, char ch) {
        int index = -1; 
        if((index = word.find(ch)) != string::npos) {
            reverse(word.begin(), word.begin() + index + 1); 
            return word;  
        }
        return word;  
    }
};
