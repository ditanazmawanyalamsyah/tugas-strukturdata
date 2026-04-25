#include<iostream>
using namespace std;

struct Node{
	int data;
	Node *next;
};
void traverse(Node *temp);

int main(){
	
	Node *node1 = NULL;
	Node *node2 = NULL;
	Node *node3 = NULL;
	
	node1 = new Node;
	node2 = new Node;
	node3 = new Node;
	
	node1->data = 10;
	node1->next = node2;
	
	node2->data = 20;
	node2->next = node3;
	
	node3->data = 30;
	node3->next = NULL;
	
	traverse(node1);
	
	return 0;
}
void traverse(struct Node *temp){
	int i = 0;
	int max;
	while(temp != NULL){
		cout << "data ke-" << i + 1 << ":";
		if(temp->data > max){
			max = temp->data;
		}
		cout << temp->data;
		temp = temp->next;
		cout << endl;
		i++;
	}
	cout << "Terbesar adalah: " << max << endl;
}
