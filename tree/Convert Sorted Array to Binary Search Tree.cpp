class Solution {
public:
    TreeNode* makeTree(vector<int>& nums, int low, int high){
        if(low>=high) return NULL;
        int mid = (low+high)/2;
        TreeNode* curr= new TreeNode(nums[mid]);
        curr->left = makeTree(nums,low,mid);
        curr->right = makeTree(nums,mid+1,high);
        return curr;
        
    }
    
    TreeNode* sortedArrayToBST(vector<int>& nums) {
      return makeTree(nums,0,nums.size());
    }  
};
