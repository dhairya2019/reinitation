int height(struct Node* node)
{
    if(node==NULL){
        return 0;
    }
    
    int leftchild=0,rightchild=0;
    leftchild = height(node->left);
    rightchild = height(node->right);
    if(rightchild>leftchild) return rightchild+1;
    else return leftchild+1;
}
