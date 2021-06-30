class Solution {
public:
    vector<int> v1;
    vector<int> preorderTraversal(TreeNode* root) {
        if(root!=NULL){
            v1.push_back(root->val);
            if(root->left!=NULL) preorderTraversal(root->left);
            if(root->right!=NULL) preorderTraversal(root->right);
        }
        return v1;
    }
};
