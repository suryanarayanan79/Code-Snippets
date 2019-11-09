/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
//leetCode Problem
//Problem:
// Get the first intersection node of two list a and b.
//Solution:
//Find the difference of length of the two list.
//start at the difference index of the longest list. and start at the head of the shortest list.
//compare the address of the each node in the list till the end of list.
//return the node immediately if it is equal.
class Solution {
public:
    ListNode* getIntersectionNode(ListNode* headA, ListNode* headB) {
        ListNode* t1 = headA;
        ListNode* t2 = headB;

        int length1 = 0; // for t1.
        int length2 = 0; // for t2.
        int diff = 0;
        // finding the length of the headA
        while (t1) {
            t1 = t1->next;
            length1++;
        }
        while (t2) {
            t2 = t2->next;
            length2++;
        }


        diff = length1 - length2;
        bool length1Longest = false;
        int startIndex1 = 0;
        int startIndex2 = 0;


        if (diff < 0) {
            length1Longest = false;
        }
        else
        {
            length1Longest = true;
        }

        if (length1Longest) {
            startIndex1 = abs(diff);
            startIndex2 = 0;
        }
        else {
            startIndex2 = abs(diff);
            startIndex1 = 0;
        }
        // resetting the positions
        t1 = headA;
        t2 = headB;
        int localIndex = 0;

        while (localIndex < startIndex1) {
            t1 = t1->next;
            localIndex++;
        }
        //
        localIndex = 0;
        while (localIndex < startIndex2) {
            t2 = t2->next;
            localIndex++;
        }
        //Comparing only the node address. NOT the value IMPORTANT.
        while (t1 && t2) {
            if (t1 == t2) {
                break;
            }
            t1 = t1->next;
            t2 = t2->next;
        }
        return t1;
    }
};