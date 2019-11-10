/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
// nice explanation
//https://www.youtube.com/watch?v=sYcOK51hl-A
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* current = head;
        ListNode* previous = nullptr;
        ListNode* next = nullptr;
        while (current) {
            next = current->next;
            current->next = previous;
            previous = current;
            current = next;
        }
        head = previous;
        return head;
    }
};