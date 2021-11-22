
 */
class Solution {
public:
    TreeNode * getMin(TreeNode * root){
        if(root == nullptr)
            return nullptr;
        while(root->left != nullptr){
            root = root->left; 
        }
        return root; 
    }
    
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(root == nullptr)
            return nullptr; 
        else {
            
            if(root->val < key){
                root->right = deleteNode(root->right, key); 
            }
            else if(root->val > key){
                root->left = deleteNode(root->left, key); 
            }
            else{ 
                if(root->left == nullptr){
                    TreeNode * temp = root->right; 
                    delete root; 
                    return temp; 
                }
                else if(root->right == nullptr){
                    TreeNode * temp = root->left; 
                    delete root; 
                    return temp; 
                }
                else {
                    TreeNode * inorderSuccessor = getMin(root->right); 
                    root->val = inorderSuccessor->val; 
                    root->right = deleteNode(root->right,root->val);
                }
            }        
        }
        return root; 
    }
};
