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
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
          ListNode *slow=head;
          ListNode*fast=head;
        while(n--){
            fast=fast->next;
        }
        if(fast==NULL){
            return slow->next;
        
        }
        while(fast->next != NULL){
            slow=slow->next;
            fast=fast->next;
        }
        slow->next = slow->next->next;
        return head;
        



        //ListNode* start=new ListNode();
       // start->next=head;
    //     ListNode* fast=head;
    //     ListNode* slow=head;
    //     if(fast==NULL){
    //         return slow->next;
    //     }
    //     for(int i=0;i<n;++i){
    //         fast=fast->next;
    //     }
    //     while(fast->next!=NULL){
    //         slow=slow->next;
    //         fast=fast->next;
            
    //     }
    //    slow->next=slow->next->next;
    //     return head;

        
    }
};