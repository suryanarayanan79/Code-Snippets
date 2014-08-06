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
	
	int Length;
	TList(){
		tail = 0;// NULL or 0 both are valid.
		Length = 0;
	}

	~TList(){
	}

	void Add(int data){
		if(tail == NULL){
			cout << "I am here" << endl;
			Node* temp;
			temp = new Node; // create a some address space.
			temp->data = data;
			temp->next = NULL;
			tail = temp;
			head = temp;
		}else 
			// add to the end.
			
		{
			while(tail->next != NULL){
				tail = tail->next;
			}
			Node *temp;
			temp = new Node;
			temp->data = data;
			temp->next = NULL;
			tail->next = temp;
		} 
	}

	void Delete(){
	}

	void Insert(){
	}
	void CountNodes(){
		
		tail = head;
		while(tail != NULL){
			tail = tail->next;
			Length++;
		}
		cout << "Lenght of the list is"  << Length;
	}

	void Display(){
		tail = head;
		while(tail != NULL){
			cout << tail->data << endl;			
			tail = tail->next;
		}
	}
};

int main(){
	TList list;
	list.Add(10);
	list.Add(20);
	list.Add(30);
	list.Add(40);
	list.Display();
	list.Display();
	//duplicates of display was not possible using 
	list.CountNodes();
	return 1;
}