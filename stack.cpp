#include <iostream>
using namespace std;
//LIFO
class Stack{
	struct Node{
		Node *next;
		int data; // make this to hold any data. to be generic.
	};
	struct Node* top;
//	struct Node* first;
	int Length;
public :
	void pop();
	void push(int data);
	void Top();
	bool IsEmpty();
	void Display();
public :
	Stack();
	~Stack();
};

Stack :: Stack(){
	top = NULL;
 }

void Stack::push(int data){
	Node *temp = new Node;
	temp->data = data;
	temp->next = top;
	top = temp;
}

void Stack::Display(){
	Node *temp;
	temp = top;
	while(temp->next != NULL){
		cout << temp->data;
		temp = temp->next;
	}
}


	void Stack::pop(){ 
		if(top == NULL)return ;
		
		Node *temp ;
		temp = top;
		top = top->next;
		delete temp;
	}

	void Stack::Top(){
		cout <<"\n" << top->data;
	}






int main(){
	Stack *stack = new Stack();
	stack->push(10);
	stack->push(20);
	stack->push(30);
	stack->push(40);
	stack->pop();
	stack->push(50);
	stack->Display();
	stack->Top();
	return 0;
}

