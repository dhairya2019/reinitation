class Solution {
public:
    vector<int> v1;
    vector<int> preorder(Node* root) {
      if(root!=NULL){
      v1.push_back(root->val);
      for(auto x: root->children){
          preorder(x);
      }
       
    }
         return v1;
    }
};
