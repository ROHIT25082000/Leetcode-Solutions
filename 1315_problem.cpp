int sum = 0; 
void solve(TreeNode * root) {
         if(root) {
            if(root->val % 2 == 0){
                if(root->left) {
                    if(root->left->left)sum += root->left->left->val;
                    if(root->left->right)sum += root->left->right->val; 
                }
                if(root->right) {
                    if(root->right->left){sum += root->right->left->val;}
                    if(root->right->right) {sum += root->right->right->val;}
                }
            }
            solve(root->left); 
            solve(root->right); 
        }
}
        
int sumEvenGrandparent(TreeNode* root) {
        solve(root); 
        return sum; 
}
