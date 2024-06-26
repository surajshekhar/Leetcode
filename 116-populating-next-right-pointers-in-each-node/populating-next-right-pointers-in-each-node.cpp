/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
        
        if(!root)return root;
        queue<Node*>q;
        Node*curr;
        q.push(root);
        while(!q.empty()){
            int qs=q.size();
            while(qs--){
                curr=q.front();
                q.pop();
                if(qs!=0)curr->next=q.front();//mapped to new front
                if(curr->left){
                    q.push(curr->left);
                    q.push(curr->right);
                }
            }
        }
        return root;
    }
};