/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* next = nullptr;
        ListNode* previous = nullptr;
        ListNode* current = head;
        while (current) {
            //check
            if (current->val == val) {
                next = current->next;
                // delete current
                if (previous != nullptr)previous->next = next;
                current->next = nullptr;
                if (current == head) {
                    head = next;
                }
                //Move Current
                current = next;
                //previous remains same.
            }
            else {
                //Move Current
                previous = current;
                current = current->next;
                if (current != nullptr)next = current->next;
            }
        }
        return head;
    }
};