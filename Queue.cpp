#include <iostream>
using namespace std;
class Queue
{
	struct Node{
	int data;
	Node* next;
	};
	Node* first;
	Node* previous;
public :
	Queue();
	~Queue();
	void Enqueue(int data); // add data in last index of the list always.
	void Dequeue();// remove data in front always.
	void IsEmpty(); // check is the queue is empty or not.
	void Front();// display the first index data.
	void Display(); // display the whole data in the queue.
};

Queue::Queue(){
	first = NULL;
}

Queue::~Queue(){
}

void Queue::Display(){
	if(first == NULL)return;	
	Node* ptr;
		ptr = first;
	while(ptr->next != NULL){
		cout << ptr->data <<"\t";
		ptr = ptr->next;		
	}
	cout << ptr->data << endl;// to print out the last data.for which ptr->next is NULL
}

void Queue::Dequeue(){
if(first == NULL)return;
	Node* temp;
	temp = first;
	delete temp;
	first = first->next;
}

void Queue::Enqueue(int data){
	if(first == NULL){
		Node* temp = new Node;
		temp->data = data;
		temp->next = NULL;
		first = temp;
	}else{
		// go to the last index and add the data.
		previous = first;
		while(previous->next != NULL){
			previous = previous->next;
		}
		Node *temp = new Node;
		temp->data = data;
		temp->next = NULL;
		previous->next = temp;
		previous = temp;
	}
}

void Queue::IsEmpty(){
	if(first == NULL)
		cout << "empty" << endl;
	else 
		cout << "not empty" << endl;
}

void Queue::Front(){
if(first != NULL)
	cout <<"First data :"	<< first->data << endl;
else 
	cout << "NO data";
}


int main(){
Queue* q = new Queue();
q->Enqueue(10);
q->Enqueue(20);
q->Enqueue(30);
q->Enqueue(40);
q->Enqueue(50);
q->Enqueue(60);
q->Front();
q->IsEmpty();
q->Display();
q->Dequeue();
q->Dequeue();
q->Dequeue();
q->Dequeue();
q->Dequeue();
q->Dequeue();
q->Dequeue();
q->Display();
}