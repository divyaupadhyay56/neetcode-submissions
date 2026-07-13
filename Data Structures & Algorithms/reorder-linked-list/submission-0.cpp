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
    void reorderList(ListNode* head) {
        ListNode* fast = head;
        ListNode* slow = head;
        while(fast != nullptr && fast->next != nullptr){
            fast = fast->next->next;
            slow = slow->next;
        }
        // reverse the second half
        ListNode* rev = slow->next;
        slow->next = nullptr;
        ListNode* prev = nullptr;
        while(rev != nullptr){
            ListNode* temp = rev->next;
            rev->next = prev;
            prev = rev;
            rev = temp;
        }
        ListNode* first = head;
        rev = prev;
        while(rev != nullptr){
            ListNode* tmp1 = first->next;
            ListNode* tmp2 = rev->next;
            first->next = rev;
            rev->next = tmp1;
            first = tmp1;
            rev = tmp2;
        }

    }
};
