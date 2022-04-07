class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> pq(stones.begin(), stones.end());  
        while(pq.size() >= 2) {
            int one = pq.top();  
            pq.pop();  
            int two = pq.top();  
            pq.pop();  
            int diff = abs(one - two); 
            pq.push(diff);  
        }
        return pq.top();  
    }
};
