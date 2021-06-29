//Function to find the minimum element in the given BST.
int minValue(Node* root)
{
    if(root==NULL){
        return -1;
    }
    else if(root->left==NULL){
        return root->data;
    }
    else return minValue(root->left);
}
