class Solution {
public:
    struct cmp {
        bool operator()(vector<int> & a, vector<int> &b) {
            return a[1] - a[0] > b[1] - b[0]; 
        }
    };
    int twoCitySchedCost(vector<vector<int>>& costs) {
        sort(costs.begin(), costs.end(), cmp());
        int ans = 0; 
        for(int i = 0; i < costs.size()/2; ++i) {
            ans += costs[i][0]; 
        }
        for(int i = costs.size()/2; i < costs.size(); ++i)
        {
            ans += costs[i][1]; 
        }        
        return ans; 
    }
};
