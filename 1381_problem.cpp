class CustomStack {
public:
    int maxSize;   
    int * arr; 
    int top;  
    CustomStack(int maxSize) {
        this->maxSize = maxSize;  
        this->top = -1;  
        this->arr = new int[maxSize];  
    }
    
    void push(int x) {
        int val = (top +1 < maxSize) ? arr[++top] = x : -1;
    }
    
    int pop() {
        return (top > -1) ? arr[top--] : -1;
    }
    
    void increment(int k, int val) {
        for(int i = 0; i <= top && i < k; ++i) {
            arr[i] += val; 
        }
    }
};

