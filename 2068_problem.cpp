bool checkAlmostEquivalent(string word1, string word2) {
        int arr[256] = {0};   
        for(int i = 0; i < word1.size(); ++i) {
            arr[word1[i]-'a']++;
            arr[word2[i]-'a']--; 
        } 
        string asn =word1+word2; 
        for(int i = 0; i < asn.length() ; ++i) {
            if(abs(arr[asn[i] - 'a']) > 3) {
                return false; 
            }
        }
        return true; 
}
