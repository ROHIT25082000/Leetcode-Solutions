class Solution {
public:
    int dp[101][101]; 
    int solve(vector<int> & colors, int low, int high) {
        if(low < high)
        {
            if(dp[low][high] != -1) {
                return dp[low][high]; 
            }
            if(colors[low] != colors[high]) {
                return dp[low][high] = (high - low);
            }
            return dp[low][high] = max({solve(colors, low+1, high), solve(colors, low, high-1), solve(colors, low+1, high-1)});  
        }
        return 0;
    }
    
    int maxDistance(vector<int>& colors) {
        memset(dp, -1, sizeof(dp)); 
        return solve(colors, 0, colors.size()-1);  
    }
};
