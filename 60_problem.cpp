class Solution {
public: 
    
    void next_permutation(vector<int> & arr) 
    {
        if(arr.size() == 1) 
            return;  
        int i = arr.size() - 1; 
        int j = arr.size() - 1;  
        
        while(i > 0 && arr[i-1] >= arr[i]) {
            i--; 
        }
        int start = i;  
        int leftIndex = i-1;  
        if(i > 0) {
            while(j > i && arr[j] <= arr[leftIndex]) {
                --j; 
            }
            swap(arr[leftIndex], arr[j]);  
        }
        int end = arr.size()-1;  
        
        while(start <= end) {
            swap(arr[start], arr[end]); 
            start++; 
            end--;  
        }
    }
    
    string getPermutation(int n, int k) {
        vector<int> arr;  
        for(int i = 1; i <= n; ++i) {
            arr.push_back(i);  
        }
       for(int i = 0; i < k-1; ++i) {
            next_permutation(arr);   
       } 
       string result = ""; 
        for(int i = 0; i < arr.size(); ++i) {
            result += to_string(arr[i]);  
        }
        return result; 
    }
};
