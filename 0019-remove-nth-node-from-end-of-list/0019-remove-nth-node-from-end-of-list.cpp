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
        if(!head||!head->next){
return NULL;
        }
        ListNode* slow=head;
        ListNode* fast=head;
        ListNode* prev=NULL;
        for(int i=0;i<n;i++){
         fast=fast->next;
        }
          if(fast==NULL){
            return head->next;
        }
        while(fast ){
            prev=slow;
            fast=fast->next;
            slow=slow->next;
            
        }
        prev->next=prev->next->next;
        return head;
        
    }
};