class Solution {
public:
    int post_index; 
    
    TreeNode * solve(vector<int> &inorder, int low, int high, vector<int> &postorder){ 
        if(post_index < 0){
            return nullptr;
        }
        if(low > high){ 
            return nullptr; 
        }
        int index_root; 
        int temp = postorder[post_index--]; 
        
        TreeNode * newNode = new TreeNode(temp); 
        
        for(int i = low; i <= high; ++i){
            if(inorder[i] == temp){
                index_root = i;         
            }   
        }
        
        
        newNode->right = solve(inorder, index_root+1,high,postorder); 
        newNode->left = solve(inorder, low, index_root-1,postorder);
        return newNode;
    }
    
    
    
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        
        post_index = postorder.size()-1; 
        int low = 0; 
        int high = inorder.size()-1; 
        
        TreeNode * root = solve(inorder,low,high,postorder); 
        return root; 
    }
};
