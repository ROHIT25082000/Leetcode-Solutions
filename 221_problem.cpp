class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        vector<vector<int>> dp; 
    
        for(int i = 0; i < matrix.size(); ++i) {
            vector<int> t; 
            for(int j = 0; j < matrix[0].size(); j++) {
                if(matrix[i][j] == '0') {
                    t.push_back(0);
                }
                else {
                    t.push_back(1); 
                }
            }
            dp.push_back(t);  
        }
        
        int ans = 0; 
        for(int i = dp.size()-1; i >= 0; i--) {
            for(int j = dp[0].size()-1; j >= 0; j--) {
                if(i == dp.size()-1 || j == dp[0].size()-1) {
                    if(dp[i][j] == 1) {
                        ans = max(ans, 1); 
                    }
                }
                else {
                    if(dp[i][j] == 1) {
                        int temp = min({dp[i+1][j], dp[i+1][j+1], dp[i][j+1]}) + 1; 
                        ans = max(ans, temp); 
                        dp[i][j] = temp; 
                    }
                }
            }
        }
        
        return ans * ans; 
    }
};
