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
    int maxdepth;
    int bottomleft;
    void dfs(TreeNode* root, int depth){
        if(root==NULL)return ;
        if(depth>maxdepth){
            maxdepth=depth;
            bottomleft=root->val;
        }
        //for rightmost change the     order of dfs
        dfs(root->left,depth+1);
        dfs(root->right,depth+1);
    }
public:
    int findBottomLeftValue(TreeNode* root) {
        maxdepth=-1;
        bottomleft=0;
        dfs(root,0);
        return bottomleft;
        
    }
};