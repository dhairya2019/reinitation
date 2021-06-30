class Solution {
public:
    vector<int> v1;
    vector<int> postorder(Node* root) {
      if(root!=NULL){
          for(auto x: root->children){
              postorder(x);
         }
          v1.push_back(root->val);
      }  
        
        return v1;
    }
};
