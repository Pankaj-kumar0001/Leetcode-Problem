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
   ListNode* removeNodes(ListNode* head) {
    vector<int> arr;
    ListNode* temp = head;

    // Step 1: Populate the array with the values of the linked list
    while (temp) {
        arr.push_back(temp->val);
        temp = temp->next;
    }

    // Step 2: Traverse the array from right to left, keeping only the largest values
    int n = arr.size();
    int maxi = arr[n - 1];
    vector<int> ans = {maxi}; // Initialize with the last element

    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] >= maxi) {  // Change > to >= to allow duplicates
            maxi = arr[i];
            ans.push_back(arr[i]);
        }
    }

    // Step 3: Reverse the array to restore the order
    reverse(ans.begin(), ans.end());

    // Step 4: Construct a new linked list from the filtered values
    ListNode* dummy = new ListNode(-1);
    ListNode* current = dummy;

    for (int val : ans) {
        current->next = new ListNode(val);
        current = current->next;
    }

    return dummy->next;
}

};