class Solution {
public:
    long long maximumImportance(int n, vector<vector<int>>& roads) {
        long long count[n];// indegree for city
        long long roadVal[n]; // value for city 
        
        memset(count, 0, sizeof(count));
        
        for(auto road : roads) {
            count[road[0]]++; // store indegree for cities
            count[road[1]]++; // 
        }
        priority_queue<pair<long long,int>> pq; // max heap based on indegree.
        for(int i = 0; i < n; ++i) {
            pq.push({count[i],i}); 
        }
        //int val = n;
        while(!pq.empty()) { // pop and assign values 
            pair<long long,int> temp = pq.top(); pq.pop();  
            roadVal[temp.second] = n--; // assign values to roads . 
        }
        long long ans = 0; // calculate the sum.
        for(auto road : roads) {
            ans += (roadVal[road[0]] + roadVal[road[1]]);
        }
        
        return ans;
    }
};
