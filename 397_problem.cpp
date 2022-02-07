class Solution {
public:
    unordered_map<long,long> hash; 
    int solve(long n) {
        if(n == 1) 
            return 0; 
        if(hash.find(n) != hash.end())
            return hash[n]; 
        if(n % 2 == 0) {
            int ans = solve(n/2) + 1;
            hash[n] = ans; 
            return ans; 
        }
        int temp = min({solve(n-1), solve(n+1)}) + 1; 
        hash[n] = temp; 
        return temp; 
    }
    int integerReplacement(int n) {
        return solve(n); 
    }
};
