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
    
    ListNode* reverse(ListNode* head){
      ListNode* temp=head;
        ListNode* prev=NULL;
        while(temp){
            ListNode* front=temp->next;
            temp->next=prev;
            prev=temp;
            temp=front;
}
        return prev;
    }
    bool isPalindrome(ListNode* head) {
        ListNode* fast=head;
        ListNode* slow=head;
        while(fast && fast->next){
         fast=fast->next->next;
            slow=slow->next;
        
        }
        ListNode* newone=reverse(slow);
        ListNode* t1=head;
        ListNode* t2=newone;
        while(t2){
         if(t1->val!=t2->val){
     return false;
         }
            t1=t1->next;
            t2=t2->next;
        }
        return true;
    }
};