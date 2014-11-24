#include <iostream>
using namespace std;
class Node{
public:
	Node* next;
	int data;
};

class TList{

public:

	Node* head;
	Node* tail;

	TList(){
		tail = NULL;// NULL or 0 both are valid.
		head = NULL;	
	}

	~TList(){
	}

	void Add(int data){
		if(tail == NULL){
			cout << "I am here" << endl;
			tail = CreateNode(data);
			head = tail;
		}else 
			// add to the end.
		{
			while(tail->next != NULL){
				tail = tail->next;
			}
			tail->next = CreateNode(data);
		} 
	}

	void Delete(int index){
	// traverse thru the list till index.
		// take a reference of current node and next node.
		// delete the current node and make the next node as current node.
		// handled invalid index.
		// handled first node also.
		Node* temp = head;
		Node* newnode = NULL;
		Node* previousNode = NULL;
		int count = 0;
		if (head == NULL || index > CountNodes()) {
			cout << "Invalid Index";
			return;
		};

		if (index == 0){ // delete the first node
			newnode = temp->next;
			delete temp;
			head = newnode;
			return;
		}
		while (count < index){
			previousNode = temp;
			temp = temp->next;
			count++; 
		}
		newnode = temp->next;
		delete temp;
		previousNode->next = newnode;
	}

	//void Delete(Node* temp){// Node* temp

	//}

	void Insert(){
	}

	int CountNodes(){
		int length = 0;
		Node* firstNode = head;
		while (firstNode != NULL){
			length++;
			firstNode = firstNode->next;
		}
		return length;
	}

	Node* CreateNode(int data){
		Node* tempNode = new Node();
		tempNode->data = data;
		tempNode->next = NULL;
		return tempNode;
	}

	void Display(){
		Node* firstNode = head;
		while(firstNode != NULL){
			cout << firstNode->data << endl;			
			firstNode = firstNode->next;
		}
	}
};

int main(){
	TList list;
	list.Add(10);
	list.Add(20);
	list.Add(30);
	list.Add(40);
	cout << "Lenght of the list is" << list.CountNodes();
	list.Display();
	list.Delete(0);
	cout << "\nAfter deleted\n";
	list.Display();
	return 1;
}