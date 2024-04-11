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
    int dfs(TreeNode* root, int a, int b){
        if(root==NULL) return abs(a-b);

        a=max(a, root->val);
        b=min(b, root->val);

        int l=dfs(root->left, a, b);
        int r=dfs(root->right, a, b);

        return max(l,r);
    }
public:
    int maxAncestorDiff(TreeNode* root) {
        return dfs(root, INT_MIN, INT_MAX);
    }
};