class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& asteroids) {
        long long m = mass; 
        sort(asteroids.begin(), asteroids.end());   
        int i;  
        for(i = 0; i < asteroids.size(); ++i) {
            if(m >= asteroids[i]) {
                m += asteroids[i]; 
            }else {
                break; 
            }   
        }
        if(i == asteroids.size())
            return true;
        return false; 
    }
};
