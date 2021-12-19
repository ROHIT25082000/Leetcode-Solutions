class Solution {
public:
    string decodeString(string s) {
        stack<int> count;  
        stack<string> result;   
        int index = 0;   
        string res = "";  
        while(index < s.length()) 
        {
            if(isdigit(s[index])) {
                int num = 0; 
                while(isdigit(s[index])) {
                    num = 10 * num + (s[index] - '0');  
                    index++;  
                }
                count.push(num); 
            }
            else if(s[index] == '[') {
                result.push(res);  
                res = ""; 
                index++;  
            }
            else if(s[index] == ']') {
                int num_of_times = count.top();  
                count.pop();   
                string curr_string = result.top();  result.pop();  
                string this_string = ""; 
                for(int i = 0; i < num_of_times; ++i) {
                    curr_string += res; 
                }
                res = curr_string; 
                index++;   
            }
            else {
                res += s[index];  
                index++; 
            }
            
        }
        return res;  
    }
};
