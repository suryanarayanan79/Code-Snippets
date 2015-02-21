#include <iostream>
using namespace std;

class BST{
	struct Node{
	int data;
	Node* left;
	Node* right; 
	};
	Node* CreateLeafNode(int data);
	void AddNodePrivate(int data, Node* ptr);
	void PrintInOrder(Node* ptr);
	Node* ReturnNode(int key,Node* ptr);
public :
	Node* root;
	BST();
	~BST();
	void Search(int data);
	void AddNode(int data);
	void DeleteANode(int data);
	void PrintInOrderTraversal();
};
BST::BST(){
root = NULL;
}

BST::Node* BST::CreateLeafNode(int data){
Node* temp = new Node;
temp->data = data;
temp->left = NULL;
temp->right = NULL;
return temp;
}


void BST::AddNodePrivate(int data,Node* ptr){
	if(root == NULL){
		root = CreateLeafNode(data);
	}else if(data < ptr->data) {
			// always start from the root node and add it.
		if(ptr->left != NULL){
			AddNodePrivate(data,ptr->left);
		}else
		{
			ptr->left = CreateLeafNode(data);
		}
	}else if(data > ptr->data) {
		if(ptr->right != NULL){
			AddNodePrivate(data,ptr->right);
		}else{
			ptr->right = CreateLeafNode(data);
		}
	}else {
			cout << "data is already available:"  << data << endl;
	}
}

void BST::AddNode(int data){
	AddNodePrivate(data,root);
}

void BST::PrintInOrderTraversal(){
	PrintInOrder(root);
}

void BST::PrintInOrder(Node* ptr){
	if(root == NULL){
	cout << "Tree is empty"<<endl;
	}
	else {
		if(ptr->left != NULL){
			PrintInOrder(ptr->left);
		}
		cout << ptr->data << " ";
		if(ptr->right != NULL){
			PrintInOrder(ptr->right);
		}
	}
}

int main(){
	BST* mytree = new BST();
	int treedata[] = { 50,76,21,4,32,64,15,52,14,100,83,2,3,70,87,80 };
	for(int i = 0 ; i < 16 ; i++){
		mytree->AddNode(treedata[i]);
	}
	mytree->PrintInOrderTraversal();
	return 0;
}