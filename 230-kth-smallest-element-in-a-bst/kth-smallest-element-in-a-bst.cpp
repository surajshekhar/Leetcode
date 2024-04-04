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
  void inOrder(TreeNode* root, vector<int>& st){
    //using inorder helps store tree val in sorted way
        if(root==NULL) return;
        inOrder(root->left,st);
        st.push_back(root->val);
        inOrder(root->right,st);
    }
    int kthSmallest(TreeNode* root, int k) {
        vector<int> st;
        inOrder(root,st);
       // if(st.size()<k) return -1;

        //auto it = next(st.begin(),k);
        return st[k-1];
    }
};