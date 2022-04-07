class Solution {
public:
    int numRabbits(vector<int>& answers) {
        unordered_map<int,int> hash;  
        for(int i = 0; i < answers.size(); ++i) {
            hash[answers[i]]++; 
        }
        int ans = 0;  
        for(auto item : hash) {
            int num = item.first + 1;  
            int count = item.second; 
            ans += num * ceil((double)count/(double)num);  
        }
        return ans;  
    }
};
