#include<bits/stdc++.h>

using namespace std;  

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;
        unordered_map<int,int> hash; 
        
        for(int i = 0; i < nums.size(); ++i) {
            if(hash.find(target - nums[i]) != hash.end()){
                result.push_back(hash[target - nums[i]]); 
                result.push_back(i); 
                return result; 
            }
            hash.insert({nums[i], i}); 
        }
        return {};
    }
};

int main() {
    Solution sol;
}