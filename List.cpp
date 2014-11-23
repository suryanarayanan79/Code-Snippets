#include <iostream>
using namespace std;
class TList{
public:
	struct Node{
		Node *next;
		int data; // make this to hold any data. to be generic.
	};
	struct Node* tail;
	struct Node* head;
	
	
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

	void Delete(){
	}

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
	return 1;
}