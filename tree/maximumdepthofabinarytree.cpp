class Solution {
public:
    int maxDepth(TreeNode* root) {
      if(root==NULL) return 0;
      int leftchild=0,rightchild=0;
      leftchild = maxDepth(root->left);
      rightchild = maxDepth(root->right);
      
      return max(leftchild,rightchild)+1; 
    }
};
