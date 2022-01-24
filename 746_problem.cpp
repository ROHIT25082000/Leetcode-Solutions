class Solution {
public:
    
    int dp[1002]; 
    
    int solve(int one, vector<int> & cost) 
    {
        if(one > cost.size()) {
            return INT_MAX;
        }else if(one == cost.size()) {
            return 0; 
        }
        if(dp[one] != -1) 
            return dp[one]; 
        return dp[one] = cost[one] + min(solve(one + 1, cost), solve(one + 2, cost));  
    }
    
    int minCostClimbingStairs(vector<int>& cost) {
        int one = 0; 
        int two = 1;
        memset(dp, -1, sizeof(dp));  
        return min(solve(one, cost), solve(two, cost));   
    }
};
