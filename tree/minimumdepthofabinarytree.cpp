class Solution {
public:
    int minDepth(TreeNode* root) {
      if(root==NULL) return 0;
      int rightchild = minDepth(root->right);
      int leftchild = minDepth(root->left);
      if(leftchild==0) return 1+rightchild;
      else if(rightchild==0) return 1+leftchild;  
      else return min(leftchild,rightchild)+1; 
    } 
};
