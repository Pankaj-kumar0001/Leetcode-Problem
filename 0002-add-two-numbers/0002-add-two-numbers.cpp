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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dummy=new ListNode(-1);
        ListNode* cur=dummy;
        ListNode* t1=l1;
        ListNode* t2=l2;
        if(!l1){
            return l2;
        }
        if(!l2){
            return l1;
        }
        int carry=0;
        while(t1 || t2){
            int sum=carry;
           if(t1){
          sum+=t1->val;
         t1=t1->next;
          }
            
            if(t2){
          sum+=t2->val;
                t2=t2->next;
            }
            carry=sum/10;
            ListNode* add=new ListNode(sum%10);
            cur->next=add;
            cur=cur->next;
        }
        if(carry){
            ListNode* newone=new ListNode(carry);
            cur->next=newone;
        }
        return dummy->next;
        
    }
};