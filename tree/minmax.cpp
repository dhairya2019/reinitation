class Solution
{
public:
    int findMax(Node *root)
    {
        if(root==NULL){
        return -1;
    }
    else if(root->right==NULL){
        return root->data;
    }
    else return findMax(root->right);
    }
    int findMin(Node *root)
    {
        if(root==NULL){
        return -1;
    }
    else if(root->left==NULL){
        return root->data;
    }
    else return findMin(root->left);
    }
};
