class Solution {
public:
    int wateringPlants(vector<int>& plants, int capacity) {
        int count = 0; 
        int origin = capacity;  
        for(int i = 0; i < plants.size(); ++i) {
            if(capacity >= plants[i]) {
                count++;
                capacity -= plants[i];  
            }else {
                count += 2*i;
                capacity = origin;  
                capacity -= plants[i];
                count++; 
            }
        }
        return count; 
    }
};
