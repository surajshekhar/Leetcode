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
    bool isEvenOddTree(TreeNode* root) {
        queue<TreeNode*>q;
        TreeNode* currnode=root;
        q.push(currnode);
        bool iseven=true;
        while(!q.empty()){
            int n=q.size();
            int prev=INT_MAX;
            if(iseven)prev=INT_MIN;
            while(n--){
                currnode=q.front();
                q.pop();
                if(iseven && (currnode->val%2==0 || currnode->val<=prev))return false;
                if(!iseven &&(currnode->val%2==1 || currnode->val>=prev))return false;
                prev=currnode->val;
                if(currnode->left)q.push(currnode->left);
                if(currnode->right)q.push(currnode->right);

            }
            iseven=!iseven;
        }
        return true;
        
    }
};