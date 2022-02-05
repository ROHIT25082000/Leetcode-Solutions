class Solution {
public:
    int longestValidParentheses(string s) {
        stack<int> st; 
        st.push(-1);   
        int max_length = 0;  
        
        for(int i = 0; i < s.length(); ++i) {
            if(s[i] == ')') {
                if(st.top() == -1) {
                    st.push(i);
                }
                else {
                    if(s[st.top()] == '(') {
                        st.pop(); 
                    }else{
                        st.push(i);
                    }
                }   
            }else {
                st.push(i); 
            }
        }
        st.push(s.length());  
        
        int curr; 
        
        while(st.top() != -1) {
            int t = st.top();
            st.pop(); 
            max_length = max(max_length, t-st.top()-1);
        }
        return max_length;     
    }
};
