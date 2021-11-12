class Solution {
public:
     int maxArea(vector<int>& height) {
        int max_area = 0; 
        int left = 0;
        int right = height.size()-1; 
        
        while(left < right){
            if(height[left] < height[right]){
                max_area = max(max_area, height[left] * (right-left)); 
                left++; 
            }
            else{
                max_area = max(max_area, height[right] * (right-left)); 
                right--; 
            }
        }
        return max_area; 
    }
};