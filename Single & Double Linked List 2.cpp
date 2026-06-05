#include<iostream>
using namespace std;

struct Node{
	int data;
	Node *next;
	Node *prev;
};

void traversal_forward(Node *head);
void traversal_backward(Node *prev);

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
	
	cout << "===== Data Forward =====" << endl;
	traversal_forward(node1);
	
	cout << "===== Data Backward =====" << endl;
	traversal_backward(node3);
	
	return 0;
}
void traversal_forward(Node *head){
	Node *temp = head;
	int i = 0;
	int max = head->data;
	while(temp != NULL){
		cout << "data ke-" << i + 1 << ":" << temp->data << endl;		
		if(temp->data > max){
			max = temp->data;
		}
		temp = temp->next;
		cout << endl;
		i++;
		if(temp == head)
		break;
	}
	cout << "Terbesar adalah: " << max << endl;
	cout << endl;
}
void traversal_backward(Node *tail){
	Node *temp = tail;
	int i = 0;
	int min = tail->data;
	while(temp != NULL){
		cout << "data ke-" << i + 1 << ":" << temp->data << endl;
		if(temp->data < min){
			min = temp->data;
		}
		temp = temp->prev;
		cout << endl;
		i++;
		if(temp == tail)
		break;
	}
	
	cout << "Terkecil adalah: " << min << endl;
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
//	int max;
//	while(temp != NULL){
//		cout << "data ke-" << i + 1 << ":";
//		if(temp->data > max){
//			max = temp->data;
//		}
//		cout << temp->data;
//		temp = temp->next;
//		cout << endl;
//		i++;
//	}
//	cout << "Terbesar adalah: " << max << endl;
//}
