#include<iostream>

using namespace std;

struct DoubleNode {
    DoubleNode* prev;
    DoubleNode* next;
    int val;
    DoubleNode(int x) :prev(nullptr), next(nullptr), val(x) {

    }
};

class DoubleLinkedList {
    DoubleNode* head;
    int count;
public:
    DoubleLinkedList() : head(nullptr), count(0) {

    }

    void AddNodeAtIndex(int index, int val) {
        // traverse to the list till the index and add.
        // check if the index is available or not 
        // check if the index is head or not
        // check if the index is tail or not.
        //cout << "Count is \t" << count;
        if (index == 0) {
            //Add at the head node
            AddNodeAtHead(val);
        }
        else if (index == count) {
            //Add at the tail node
            AddNodeAtTail(val);
        }
        else if (index > count) {
            cout << "No index Found";
        }
        else {
            DoubleNode* current = head;
            int localCount = 0;
            while (index > localCount) {
                current = current->next;
                localCount++;
            }
            //cout << "Current Node\t" << current->val;
            // inserting the node 
            if (current != nullptr) {
                DoubleNode* newNode = new DoubleNode(val);
                newNode->next = current;
                newNode->prev = current->prev;

                current->prev->next = newNode;
                current->prev = newNode;
                count++;
            }

        }
    }
    //TODO this is not working , something is messed here.
    void AddNodeAtHead(int val) {
        // coun
        if (head == nullptr) {
            //create head.
            head = new DoubleNode(val);
        }
        else {
            DoubleNode* current = new DoubleNode(val);
            current->next = head;
            current->prev = nullptr;
            head = current;
        }
        count++;
    }

    void AddNodeAtTail(int val) {
        if (head == nullptr)return;
        count++;

        DoubleNode* temp = head;
        while (temp) {
            if (temp->next == nullptr) {
                // temp will be the last node.
                break;
            }
            temp = temp->next;
        }
        //cout << "Last Node Value " << temp->val;
        DoubleNode* current = new DoubleNode(val);
        current->next = nullptr;
        current->prev = temp;//last node.
        temp->next = current;
    }

    void DisplayDoubleList() {
        if (head == nullptr) {
            return;
        }
        DoubleNode* currentNode = head;
        while (currentNode != nullptr) {
            cout << currentNode->val << "\t";
            currentNode = currentNode->next;
        }
    }

    int GetNodeAtIndex(int index) {
        if (head == nullptr) return -1;
        if (index > count) return -1;
        int localCount = 0;
        DoubleNode* current = head;
        while (index > localCount) {
            current = current->next;
            localCount++;
        }
        return current->val;
    }

    void DeleteNodeAtIndex(int index) {
        if (index > count)return;
        if (index == 0 && head != nullptr) {
            //delete the head node.
            if (head->next != nullptr)head = head->next;
            head->prev = nullptr;
        }
        else if (index == count - 1) {
            // delete the tail node.
            // Traverse the last node and delete it.
            int localCount = 0;
            DoubleNode* current = head;
            while (localCount < count - 1) {
                current = current->next;
                localCount++;
            }
            // current will be tail node here.
            current = current->prev;
            current->next = nullptr;
        }
        else {
            int localCount = 0;
            DoubleNode* current = head;
            while (index > localCount) {
                current = current->next;
                localCount++;
            }

            if (current != nullptr) {
                if (current->prev != nullptr && current->prev->next != nullptr)
                    current->prev->next = current->next;
                if (current->next != nullptr && current->next->prev != nullptr)
                    current->next->prev = current->prev;
            }
        }
        count--;
    }
};

int main() {
    DoubleLinkedList* DL = new DoubleLinkedList();
    DL->AddNodeAtHead(7);
    DL->AddNodeAtHead(1);
    DL->AddNodeAtIndex(3, 0);
    DL->DeleteNodeAtIndex(2);
    DL->AddNodeAtHead(6);
    DL->AddNodeAtTail(4);
    DL->AddNodeAtTail(4);
    cout << DL->GetNodeAtIndex(4);
    DL->AddNodeAtHead(4);
    DL->AddNodeAtIndex(5, 0);
    DL->AddNodeAtHead(6);

    //DL->DisplayDoubleList();
    return 1;
}