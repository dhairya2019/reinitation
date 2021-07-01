#include<queue>
class Solution {
public:
    vector<double> averageOfLevels(TreeNode* root) { 
     vector<double> v1;
        if(root==NULL) return v1;
        queue<TreeNode*> Q;
        Q.push(root);
        int i,size;
        while(!Q.empty()){
        double sum=0;
          size= Q.size();
          
          for(i=0;i<size;++i){
              TreeNode* curr = Q.front();
              Q.pop();
              sum += curr->val;
              if(curr->left!=NULL) Q.push(curr->left);
              if(curr->right!=NULL) Q.push(curr->right);
          }
            v1.push_back(sum/size);
        }
        return v1;
        
    }
};
