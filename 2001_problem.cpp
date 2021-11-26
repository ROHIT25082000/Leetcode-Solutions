class Solution {
public:
    long long interchangeableRectangles(vector<vector<int>>& rectangles) {
        map<double,int> hash; 
        for(int i = 0; i < rectangles.size(); ++i) {
            hash[((double)rectangles[i][1]/(double)rectangles[i][0])]++; 
        }
        long long res = 0; 
        for(auto node : hash) {
            long long n = node.second;  
            res += n*(n-1)/2;  
        }
        return res; 
    }
};
