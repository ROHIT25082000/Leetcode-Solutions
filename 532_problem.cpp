class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        unordered_map<int,int> hash;        
        for(int i = 0; i < nums.size(); ++i) {
            ++hash[nums[i]]; 
        }
        int result = 0;
        for(auto item :  hash) {
            if(k == 0 && item.second > 1)
                ++result;
            else if(k > 0 && hash.find(item.first+k) != hash.end())
                ++result; 
        }
        return result;
    }
};
