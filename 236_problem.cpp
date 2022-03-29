class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root) {
            if(root == p || root == q) {
                return root; 
            }
            TreeNode * leftSearchResult = lowestCommonAncestor(root->left, p, q);  
            TreeNode * rightSearchResult = lowestCommonAncestor(root->right, p, q);  
            if(leftSearchResult == nullptr) 
                return rightSearchResult; 
            if(rightSearchResult == nullptr) 
                return leftSearchResult;  
            return root;
        }
        return nullptr;  
    }
};
