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
    int d;
private:
    int dfs(TreeNode* root){
        if(root==NULL)return 0;
        int left=dfs(root->left);
        int right=dfs(root->right);
        d=max(d,right+left);
        return max(left,right)+1;


    }
public:

    int diameterOfBinaryTree(TreeNode* root) {
        dfs(root);
        return d;
        
    }
};