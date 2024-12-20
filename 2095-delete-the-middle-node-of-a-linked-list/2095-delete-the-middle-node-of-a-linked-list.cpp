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
    ListNode* deleteMiddle(ListNode* head) {
           if(head==nullptr) return head;
        if(head-> next==nullptr) return head-> next;
        ListNode* fast=head;
        ListNode* slow=head;
        ListNode* prev=NULL;
        while(fast && fast->next){
            prev=slow;
         slow=slow->next;
           
            fast=fast->next->next;
           
        }
        prev->next=prev->next->next;
        return head;
    }
};