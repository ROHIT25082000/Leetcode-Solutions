class Solution {
public:
    string addBinary(string a, string b) {
        reverse(a.begin(), a.end());
        reverse(b.begin(), b.end());  
        int i = 0; 
        int j = 0; 
        
        string res = ""; 
        int carry = 0; 
        while(i < a.length() && j < b.length())
        {
            int one = a[i] - '0'; 
            int two = b[j] - '0';
            int sum = (one ^ two ^ carry); 
            carry = (one&two)|(one&carry)|(two&carry);  
            res += to_string(sum); 
            i++;
            j++; 
        }
        while(i < a.length())
        {
            int sum = (a[i]-'0')^carry;  
            res += to_string(sum);  
            carry = (a[i]-'0')&carry;  
            i++;
        }
        while(j < b.length())
        {
            int sum = (b[j]-'0')^carry;  
            res += to_string(sum);  
            carry = (b[j]-'0')&carry;  
            j++;
        }
        if(carry != 0) {
            res += "1"; 
        }
        reverse(res.begin(), res.end());
        return res; 
    }
};
