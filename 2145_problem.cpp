class Solution {
public:
    int numberOfArrays(vector<int>& differences, int lower, int upper) {
        long long sum = 0; 
        long long mini = 0;  
        long long maxi = 0; 
        for(int i = 0; i < differences.size(); ++i) 
        {
            sum += differences[i];  
            mini = min(sum, mini);  
            maxi = max(sum, maxi);  
        } 
        long ub = upper - maxi;  
        long lb = lower - mini;
        return (ub - lb + 1) > 0 ? (ub - lb + 1) : 0; 
    }
};

