class Solution {
public:
    int maxDepth(Node* root) {
        if(root==NULL) return 0;
        int maxsubtree=0;
        for(auto x: root->children){
           maxsubtree= max(maxsubtree,maxDepth(x));
        }
        return 1+maxsubtree;
    }
};
