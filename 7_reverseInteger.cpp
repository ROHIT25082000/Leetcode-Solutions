#include <bits/stdc++.h>  

using namespace std;   

class Solution {
public:
    int reverse(int x) {  
        bool isNegative = false; 
        if(x < 0) {
            isNegative = true;  
        }
        
        long curr = x; 
        
        if(isNegative) {
            curr = -curr; 
        } 
        
        long ans = 0;  
        
        while(curr){
            ans *= 10;  
            ans += curr % 10;  
            curr /= 10;  
        }
        if(ans > INT_MAX || ans < INT_MIN) {
            return 0;
        }
        
        if(isNegative){
            return -ans;
        }
        return ans;
    }
};


