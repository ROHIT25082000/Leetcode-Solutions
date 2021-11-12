#include <bits/stdc++.h>  

using namespace std;   

class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0) {
            return false;
        }
        long num = x;  
        long ans = 0; 
        while(x) {
            ans *= 10; 
            ans += x % 10; 
            x /= 10; 
        }
        return ans == num; 
    }
};