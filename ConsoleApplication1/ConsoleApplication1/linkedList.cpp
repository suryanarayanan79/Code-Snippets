#include<iostream>
using namespace std;

struct Node {
    int val;
    Node* next;
    Node(int x) :val{ x }, next{ nullptr }{};
};

class MyLinkedList {
private:
    Node* head ;
    Node* tail;
    int count = 0;
public:
    MyLinkedList() :head{ nullptr }, tail{nullptr} {
    };

    ~MyLinkedList() {

    }

    int getValueAtIndex(int index) {
        int localCount = 0;
        int returnVal = -1;
        //cout << "count" << count;
        if (index < count) {
            Node* temp = head;
            returnVal = temp->val;
            while (temp != nullptr || index > localCount) {
                returnVal = temp->val;
                temp = temp->next;
                localCount++;
            }
            return returnVal;
        }
        // iterate till the index and return the val.
        return returnVal;
    }

    void addAtHead(int val) {
        //create a new Node.
        //if head is null then make this node as head and next point to null
        //if head not null then make this node as head and next point to the previous Node.
        if (head == nullptr) {
            //does this operation invoke assingment operator.?DBO
            head = new Node(val);
        }
        else {
            Node* temp = new Node(val);
            temp->next = head;
            head = temp;
        }
        count++;
    }

    Node* CreateNode(int val) {
        Node* current = new Node(val);
        return current;
    }

    void addAtTail(int val) {
        //cout << "Tail is called\t" << val <<"\t";
        // traverse to the last node and insert the new Node.
        Node* temp = head;
        int localCount = 0;
        // Important count - 1.
        while (localCount < count - 1) {
            temp = temp->next;
            localCount++;
        }
        Node* temp1 = new Node(val);
        temp->next = temp1;
        count++;
    }

    void addAtIndex(int index,int val) {
        if (index > count) {
            //cout << "Wrong Index\t" << index <<endl;
        }else  if (index == 0) {
            // adding in the head node call addAtHead function.
            addAtHead(val);
        }
        else if (index == count) {
            addAtTail(val);
        }
        else if (index < count && head != nullptr) {
            int localCount = 0;
            Node* temp = head;
            // Important index - 1 here 
            while (localCount < index -1) {
                temp = temp->next;
                localCount++;
            }
            // insert here.
            Node* newNode = new Node(val);
            newNode->next = temp->next;
            temp->next = newNode;
            // traverse to the index and insert the new node. and relink the list.
            count++;
        }

    }

    void deleteAtIndex(int index) {
        // if the index is greater than count then do nothing.
        //else delete the index and reduce the count.
        int localCount = 0;
        if (index < count) {
            Node* current = head;
            Node* previous = head;
            // deleting the first node.
            if (index == 0) {
                head = current->next;
            }
            else {
                while (localCount < index) {
                    previous = current;
                    current = previous->next;
                    localCount++;
                }
                previous->next = current->next;
            }
        }
         else {
            cout << "Out of index\t" << index <<"\t";
        }
    }

    void displayList() {
        if (head != nullptr) {
            Node* temp = head;
            while (temp != nullptr) {
                cout << temp->val << "\t";
                temp = temp->next;
            }
        }
    }

 

    void AddAtSortedList( int val) {

    }
};

int main() {
    MyLinkedList*  list = new MyLinkedList();
    list->addAtHead(1);
    list->addAtHead(2);
    list->addAtHead(3);
    list->addAtHead(4); 
    list->addAtHead(5);
    list->addAtIndex(0, 22);
    list->addAtIndex(6, 55);
    list->addAtIndex(2, 33);
    list->deleteAtIndex(6); //12:14 @end 13:00 took 45 mins. all test cases. head , tail , index.
    //5,4,33,3,2,1,55
    list->displayList();
    //list->addAtIndex(8, 55);

    //list->AddAtSortedList(66);
    //cout << "Get\t" << list->getValueAtIndex(3);
    return 0;
}