 int maxWidthOfVerticalArea(vector<vector<int>>& points) {
       vector<int>res; 
        for(int i = 0; i < points.size(); ++i) {
            res.push_back(points[i][0]);  
        }
       sort(res.begin(), res.end()); 
       int max_width = INT_MIN; 
        for(int i = 0; i < res.size()-1; ++i) {
            max_width = max(max_width, res[i+1] - res[i]); 
        }
       return max_width; 
}
