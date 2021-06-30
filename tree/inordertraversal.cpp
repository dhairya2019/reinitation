class Solution {
public:
    vector<int> v1;
    vector<int> inorderTraversal(TreeNode* root) {
      if(root!=NULL){
         inorderTraversal(root->left);
          v1.push_back(root->val);
          inorderTraversal(root->right);
      }  
        return v1;
    }
};
