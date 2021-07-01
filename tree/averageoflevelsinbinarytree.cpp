#include<queue>
class Solution {
public:
    vector<double> averageOfLevels(TreeNode* root) {
     vector<double> v1;
        queue<TreeNode*> Q;
        Q.push(root);
        while(!Q.empty()){
          int size= Q.size();
          long sum = 0;
          for(int i=0;i<size;i++){
              TreeNode* curr = Q.front();
              Q.pop();
              sum += curr->val;
              if(curr->left!=NULL) Q.push(root->left);
              if(curr->right!=NULL) Q.push(root->right);
          }
            v1.push_back((double)sum/size);
        }
        return v1;
        
    }
