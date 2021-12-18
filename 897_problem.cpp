class Solution {
public:
    void solve(TreeNode * root, vector<TreeNode*> & result) 
    {
        if(root)
        {
            solve(root->left, result);  
            result.push_back(root);  
            solve(root->right, result);  
        }
    }
    TreeNode* increasingBST(TreeNode* root) {
        vector<TreeNode*> arr;  
        solve(root, arr);  
        int i; 
        for(i = 0; i < arr.size()-1; ++i)
        {
            arr[i]->right = arr[i+1];  
            arr[i]->left = nullptr;  
        }
        arr[i]->right = nullptr;  
        arr[i]->left = nullptr;  
        return arr[0];  
    }
};
