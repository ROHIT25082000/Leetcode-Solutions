class Solution {
public:
    bool solve(unsigned n) {
        int i = 1; 
        while(i < n) {
            i <<= 1;
        }
        return i == n;
    }
    bool isPowerOfTwo(int n) {
        if(n == 0 || n < 0) {
            return false;
        }
        if(n < 1) {
            double np = n; 
            np = 1/np;
            return solve(np);
        }
        return solve(n);
    }
};
