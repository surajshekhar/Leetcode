/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
private:
int getlength(ListNode* &head){
            ListNode* temp=head;
            int cnt=0;
            while(temp!=NULL){
                temp=temp->next;
                cnt++;
            }
            return cnt;
        }

public:
    ListNode* middleNode(ListNode* head) {
        if(head==NULL){
            return head;

        }
        int len=getlength(head);
        int ans=len/2;
        int pos=0;
        ListNode* temp=head;
        while(pos<ans){
            temp=temp->next;
            pos++;
        }
        return temp;
    
        

    }
};