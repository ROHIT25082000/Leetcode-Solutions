class Solution {
public:
    int prev = INT_MAX; 
    int min_diff = INT_MAX;  
    
    void solve(TreeNode * root) {
        if(root) {
            solve(root->left); 
            min_diff = min(min_diff, abs(root->val - prev));  
            prev = root->val;  
            solve(root->right);  
        }
    }
    
    int minDiffInBST(TreeNode* root) {
        solve(root);  
        return min_diff; 
    }
};
