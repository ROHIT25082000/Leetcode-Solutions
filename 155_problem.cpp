class MinStack {
public:
    stack<int> st; 
    stack<int> min_st;  
    MinStack() {
    }
    
    void push(int val) {
        if(min_st.empty()) {
            min_st.push(val); 
        }else if(val <= min_st.top()) {
            min_st.push(val); 
        }
        st.push(val);  
    }
    
    void pop() {
        if(st.top() == min_st.top()) {
            min_st.pop();  
        }
        st.pop(); 
    }
    
    int top() {
        return st.top(); 
    }
    
    int getMin() {
        return min_st.top(); 
    }
};
