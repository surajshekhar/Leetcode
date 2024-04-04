/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int sum=0;
    void lnr(TreeNode*root,int low,int high){
        if(root==NULL){
            return;
        }lnr(root->left,low,high);
        if(root->val>=low && root->val<=high){
            sum+=root->val;
        }
      //  nums.push_back(root->val);
        lnr(root->right,low,high);
    }


    int rangeSumBST(TreeNode* root, int low, int high) {
        //vector<int>nums;
        lnr(root,low,high);
       // int sum=accumulate(nums.begin()+low,nums.begin()+high,0);
        return sum;
    }
};