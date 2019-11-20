#include<iostream>

using namespace std;

struct DoubleNode{
    DoubleNode* prev;
    DoubleNode* next;
    int val;
    DoubleNode():prev(nullptr),next(nullptr),val(0) {

    }
};

class DoubleLinkedList {
    DoubleNode* head;
    int count;
public:
    DoubleLinkedList(): head(nullptr),count(0) {

    }

    void AddNodeAtIndex(int index , int val) {
        // traverse to the list till the index and add.
        // check if the index is available or not 
        // check if the index is head or not
        // check if the index is tail or not.

        if (index == 0) {
            //Add at the head node
            AddNodeAtHead(val);
        }
        else if (index == count -1 ) {
            //Add at the tail node
            AddNodeAtTail(val);
        }
        else if (index > count) {
            cout << "No index Found";
        }
        else {
            DoubleNode* current = head;
            int localCount = 0;
            while (localCount < index) {
                current = current->next;
                localCount++;
            }
            DoubleNode* previousNode = current->prev;
            // inserting the node 
            DoubleNode* newNode = new DoubleNode();
            newNode->next = current;
            newNode->prev = previousNode;

            previousNode->next = newNode;
            current->prev = newNode;
            count++;
        }
    }


    void AddNodeAtHead(int val) {
        // coun
        DoubleNode* current = new DoubleNode();
        current->next = head;
        head->prev = current;
        current->prev = nullptr;
        current = head;
        current->val;
        count++;
    }

    void AddNodeAtTail(int val) {
        DoubleNode* temp = head;
        while (temp) {
            if (temp->next == nullptr) {
                // temp will be the last node.
                break;
            }
            temp = temp->next;
        }
        DoubleNode* current = new DoubleNode();
        current->next = nullptr;
        current->prev = temp;//last node.
        temp->next = current;
        current->val = val;
        count++;
    }

    void DisplayDoubleList() {
        DoubleNode* currentNode = head;
        while (currentNode) {
            cout << currentNode->val;
            currentNode = currentNode->next;
        }
    }

    void DeleteNodeAtIndex(int val) {
        count--;
    }
};

int main() {
    DoubleLinkedList* DL = new DoubleLinkedList();
    DL->AddNodeAtHead(5);
    DL->AddNodeAtHead(4);
    DL->AddNodeAtHead(3);
    DL->AddNodeAtHead(2);
    DL->AddNodeAtHead(1);
    DL->DisplayDoubleList();
    return 1;
}