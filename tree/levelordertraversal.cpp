#include<bits/stdc++.h>
#include<queue>
class Solution
{
    public:
    //Function to return the level order traversal of a tree.
    vector<int> levelOrder(Node* node)
    {
      vector<int> v1;
    //   if(node == NULL) break;
      queue<Node*> Q;
      Q.push(node);
      while(!Q.empty()){
          Node* curr = Q.front();
          v1.push_back(curr->data);
          if(curr->left!=NULL) Q.push(curr->left);
          if(curr->right!=NULL) Q.push(curr->right);
          Q.pop();
      }
      return v1;
    }
};
