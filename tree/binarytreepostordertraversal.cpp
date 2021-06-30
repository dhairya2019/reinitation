class Solution {
public:
    vector<int> v1;
    vector<int> postorderTraversal(TreeNode* root) {
        if(root!=NULL){
            if(root->left!=NULL) postorderTraversal(root->left);
            if(root->right!=NULL) postorderTraversal(root->right);
            v1.push_back(root->val);
            
        }
        return v1;
    }
};
