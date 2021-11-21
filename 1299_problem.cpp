class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int value = -1; 
        for(int i = arr.size()-1; i >= 0; --i) {
            int temp = arr[i]; 
            arr[i] = value;  
            value = max(temp, value); 
        }
        return arr; 
    }
};
