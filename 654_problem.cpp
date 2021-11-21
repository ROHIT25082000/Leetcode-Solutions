
class Solution {
public:
    
    TreeNode * solve(TreeNode * root, int low, int high, vector<int> &nums) {
        if(low <= high) {
            int max_val = INT_MIN; 
            int index = -1;
            for(int i = low; i <= high; ++i) {
                if(max_val < nums[i]) {
                    max_val = nums[i]; 
                    index = i;
                } 
            }
            root = new TreeNode(max_val); 
            root->left = solve(root->left,low,index-1, nums); 
            root->right = solve(root->right,index + 1, high, nums);  
            return root;  
        }
        return nullptr; 
    } 
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        TreeNode * root = nullptr; 
        int low = 0; 
        int high = nums.size()-1; 
        return solve(root,low,high,nums); 
    }
};
