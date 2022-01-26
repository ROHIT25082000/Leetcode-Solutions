class Solution {
public:
    void solve(TreeNode * root, vector<int> & temp) 
    {
        if(root) {
            solve(root->left, temp); 
            temp.push_back(root->val);  
            solve(root->right, temp); 
        }
    }
    
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        vector<int> result; 
        vector<int> one; 
        vector<int> two;  
        solve(root1, one);  
        solve(root2, two); 
        int i = 0; 
        int j = 0;   
    
        while(i < one.size() && j < two.size())
        {
            if(one[i] < two[j])
            {
                result.push_back(one[i]); 
                i++;
            }
            else if(one[i] > two[j]) {
                result.push_back(two[j]);  
                j++;  
            }else {
                result.push_back(one[i]); 
                result.push_back(two[j]); 
                i++; 
                j++; 
            }
        }
        while(i < one.size()) 
        {
            result.push_back(one[i]);
            i++; 
        }
        while(j < two.size())
        {
            result.push_back(two[j]); 
            j++; 
        }
        return result; 
     }
};
