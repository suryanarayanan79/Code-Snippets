/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
// took more trails for this code.
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int length = 0;
        ListNode* t1 = head;
        while (t1) {
            t1 = t1->next;
            length++;
        }
        t1 = head;
        if (n > length)
            return nullptr;
        int count = 0;
        ListNode* previousNode = nullptr;
        // n node from the end of the list
        // removing the head node.
        if (count == length - n) {
            //remove head
        if (head->next)
            head = head->next;
        else
            head = nullptr;
        }
        else {
            while (count < length - n) {
                previousNode = t1;
                t1 = t1->next;
                count++;
            }
            // removing the intermediate nodes.
            if (t1 && t1->next) {
                previousNode->next = t1->next;
            }
            // removing the tail node condition
            else if (t1 && t1->next == nullptr) {
                previousNode->next = nullptr;
            }
        }
        return head;
    }
};