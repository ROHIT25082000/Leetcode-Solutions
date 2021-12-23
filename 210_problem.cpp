class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        vector<int> indegree(numCourses, 0); 
        vector<int> arr[numCourses]; 
        for(int i = 0; i < prerequisites.size(); ++i) {
            arr[prerequisites[i][1]].push_back(prerequisites[i][0]);  
        }
        for(int i = 0; i < numCourses; ++i) {
            for(auto node : arr[i]) {
                indegree[node]++;
            }
        }
        queue<int> q; 
        for(int i = 0; i < numCourses; ++i) {
            if(indegree[i] == 0) {
                q.push(i);
            }
        }
        vector<int> result; 
        
        while(!q.empty())
        {
            int temp = q.front();
            q.pop();  
            result.push_back(temp); 
            for(auto node : arr[temp]) {
               if(--indegree[node] == 0) {
                   q.push(node); 
               }
            }
        }
        
        if(result.size() != numCourses) {
            return {};
        }
        return result; 
    }
};
