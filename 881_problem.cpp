class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(), people.end()); 
        int num_boat = 0;  
        int low = 0; 
        int high = people.size()-1;  
        
        while(low <= high) 
        {
            if(people[low] + people[high] <= limit) {
                low++; 
                high--;
            }else {
                high--; 
            }
            num_boat++; 
        }
        return num_boat; 
    }
};
