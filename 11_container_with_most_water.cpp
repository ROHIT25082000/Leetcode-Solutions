class Solution {
public:
    int maxArea(vector<int>& height) {
        
        int max_area = 0;  
        int left = 0; 
        int right = height.size()-1;   
        
        while(left < right) { 
            int curr_water = min(height[left], height[right]) * (right - left);  
            max_area = max(max_area, curr_water);  
            if(height[left] < height[right]) {
                left++; 
            }else if(height[left] > height[right]) {
                right--; 
            }else {
                left++;  
                right--; 
            }
        }
        return max_area; 
    }
};
