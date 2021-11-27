class Solution {
public:
    
int minCost(vector<int>& startPos, vector<int>& homePos, vector<int>& rowCosts, vector<int>& colCosts){
        vector<int> row_transition =  {startPos[0], homePos[0]};  
        vector<int> col_transition =  {startPos[1], homePos[1]};  
        sort(row_transition.begin(), row_transition.end());  
        sort(col_transition.begin(), col_transition.end());   
        
        int cost = 0; 
        for(int i = row_transition[0]; i <= row_transition[1]; ++i) {
            if(i == startPos[0])continue;  
            cost += rowCosts[i]; 
        }
        for(int i = col_transition[0]; i <= col_transition[1]; ++i) {
            if(i == startPos[1])continue;  
            cost += colCosts[i]; 
        }
        return cost;
    }
};
