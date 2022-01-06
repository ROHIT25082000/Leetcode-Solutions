class Solution {
public:
    map<pair<int,int>,int> memo;  
    
    int solve(int n, int curr_sum, int curr_product) {
        if(curr_sum == n) {
            return curr_product; 
        }
        if(memo.find({curr_sum,curr_product}) != memo.end()) {
            return memo[{curr_sum, curr_product}]; 
        }
        int max_value = 0; 
        for(int i = 2; i <= n; ++i) {
            if(curr_sum + i <= n) {
                max_value = max(max_value, solve(n, curr_sum + i, curr_product * i)); 
            }
        }
        memo.insert({{curr_sum,curr_product}, max_value}); 
        return max_value; 
    }
    
    int integerBreak(int n) {
        if(n == 2) 
            return 1;
        if(n == 3) 
            return 2;
        int curr_sum = 0;   
        int curr_product = 1; 
        return solve(n, curr_sum, curr_product);  
    }
};
