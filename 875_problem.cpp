class Solution {
public:
        
    bool isPossible(vector<int> & piles, int mid , int h){
        int count = 0; 
        for(int i = 0; i < piles.size(); ++i){
           count += ceil(piles[i]/(1.0*mid)); 
        }
        return count <= h;  
    }
    
    int minEatingSpeed(vector<int>& piles, int h) {
        
        long long int low = 1;
        long long int high = 1000000000;
        
        int ans = -1; 
        while(low <= high){
            int mid = (high+low)/2;  
            if(isPossible(piles,mid,h)){
                ans = mid; 
                high = mid-1; 
            }else{ 
                low = mid + 1; 
            }
        }
        return ans; 
    }
};
