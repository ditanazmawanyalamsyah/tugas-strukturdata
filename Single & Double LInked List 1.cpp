#include<iostream>
using namespace std;

struct Node{
	int data;
	Node *next;
	Node *prev;
};

void traversal_forward(Node *head);
void traversal_backward(Node *tail);

int main(){
	Node *node1 = NULL;
	Node *node2 = NULL;
	Node *node3 = NULL;
	
	node1 = new Node;
	node2 = new Node;
	node3 = new Node;
	
	node1->data = 10;
	node1->next = node2;
	node1->prev = node3;
	
	node2->data = 20;
	node2->next = node3;
	node2->prev = node1;
	
	node3->data = 30;
	node3->next = node1;
	node3->prev = node2;
	
    traversal_forward(node1);
    
    traversal_backward(node3);
	
	
	cin.get();
	return 0;
}
void traversal_forward(Node *head){
	Node *temp = head;
	int i = 0;
	while(temp != NULL){
		cout << "Data Forward\n";
		cout << "data ke-" << i + 1 << ":" << temp->data << endl;
		temp = temp->next;
		cout << endl;
		i++;
		if(temp == head)
		break;
	}
}
void traversal_backward(Node *tail){
	Node *temp = tail;
	int i = 0;
	while(temp != NULL){
		cout << "Data Backward\n";
		cout << "data ke-" << i + 1 << ":" << temp->data << endl;
		temp = temp->prev;
		cout << endl;
		i++;
		if(temp == tail)
		break;
	}
}


//#include<iostream>
//using namespace std;
//
//struct Node{
//	int data;
//	Node *next;
//};
//void traverse(Node *temp);
//
//int main(){
//	
//	Node *node1 = NULL;
//	Node *node2 = NULL;
//	Node *node3 = NULL;
//	
//	node1 = new Node;
//	node2 = new Node;
//	node3 = new Node;
//	
//	node1->data = 10;
//	node1->next = node2;
//	
//	node2->data = 20;
//	node2->next = node3;
//	
//	node3->data = 30;
//	node3->next = NULL;
//	
//	traverse(node1);
//	
//	return 0;
//}
//void traverse(struct Node *temp){
//	int i = 0;
//	while(temp != NULL){
//		cout << "data ke-" << i + 1 << ":";
//		cout << temp->data;
//		temp = temp->next;
//		cout << endl;
//		i++;
//	}
//	cout << "Jumlah Data: " << i <<endl;
//}

