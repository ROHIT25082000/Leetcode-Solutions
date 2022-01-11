class Solution {
public:
    int sum = 0;  
    
    void solve(TreeNode * root, int num) 
    {
        if(root) {
            num = 2 * num + root->val;    
            if(!root->left && !root->right){
                sum += num; 
                return; 
            }
            solve(root->left, num); 
            solve(root->right, num);  
        }
    }
    
    int sumRootToLeaf(TreeNode* root) {
        int num = 0;
        solve(root, num);  
        return sum; 
    }
};
