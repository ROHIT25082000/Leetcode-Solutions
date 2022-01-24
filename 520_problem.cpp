class Solution {
public:
    bool detectCapitalUse(string word) {
        string temp1 = word;
        string temp2 = word;  
        
        transform(temp1.begin(), temp1.end(), temp1.begin(), ::tolower);  
        transform(temp2.begin(), temp2.end(), temp2.begin(), ::toupper);   
        
        if(temp1 == word || temp2 == word)
            return true; 
        
        if(isupper(word[0])) {
            int i = 1; 
            while(i < word.length()){
                if(isupper(word[i])) {
                    return false;
                }
                i++; 
            }
            return true; 
        }
        return false; 
    }
};
