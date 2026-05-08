#include<iostream>
using namespace std;

struct Node{
	int data;
	Node *next;
	Node *prev;
};

Node *head = NULL;
Node *tail = NULL;

void insert_head(int data);
void insert_tail(int data);
void show_list();

int main(){
	int n, nilai;

	cout << "Masukkan jumlah data: ";
	cin >> n;

	for(int i = 0; i < n; i++){
		cout << "Masukkan data ke-" << i + 1 << ": ";
		cin >> nilai;
		insert_tail(nilai);
	}

	cout << endl;

	cout << "Masukkan data yang ditambahkan diawal: ";
	cin >> nilai;
	insert_head(nilai);

	cout << endl;

	cout << "Data setelah ditambah diawal:" << endl;
	show_list();

	return 0;
}

void insert_head(int data){
	Node *node = new Node;
	node->data = data;

	// jika list kosong
	if(head == NULL){
		head = tail = node;
		node->next = node;
		node->prev = node;
	}
	else{
		node->next = head;
		node->prev = tail;

		head->prev = node;
		tail->next = node;

		head = node;
	}
}

void insert_tail(int data){
	Node *node = new Node;
	node->data = data;

	// jika list kosong
	if(head == NULL){
		head = tail = node;
		node->next = node;
		node->prev = node;
	}
	else{
		node->next = head;
		node->prev = tail;

		tail->next = node;
		head->prev = node;

		tail = node;
	}
}

void show_list(){
	if(head == NULL){
		cout << "List kosong";
		return;
	}

	Node *temp = head;

	do{
		cout << temp->data << " <-> ";
		temp = temp->next;
	}while(temp != head);

	cout << "(kembali ke head)";
}




//#include<iostream>
//using namespace std;
//
//struct Node{
//	int data;
//	Node *next = NULL;
//};
//
//Node *head = NULL;
//Node *tail = NULL;
//
//void insert_head(int data);
//void insert_tail(int data);
//void show_list();
//
//int main(){
//	int n;
//	int nilai;
//	
//	cout << "Masukkan Jumlah data: ";
//	cin >> n;
//	for(int i = 0; i < n; i++){
//		cout << "Masukkan data ke-" << i + 1  << ": ";
//		cin >> nilai;
//		insert_tail(nilai);
//	}
//	cout << endl;
//	
//	cout << "Masukkan data yanng ditambahkan diawal: ";
//	cin >> nilai;
//	insert_head(nilai);
//	cout << endl;
//	
//	cout << "Data setelah ditambah diawal: " << endl;
//	show_list();
//	
//	
//	return 0; 
//}
//void insert_head(int data){
//	Node *node = new Node;
//	node->data = data;
//	if(head == NULL){
//		head = tail = node;
//	}else{
//		node->next = head;
//		head = node;
//	}
//}
//void insert_tail(int data){
//	Node *node = new Node;
//	node->data = data;
//	node->next = NULL;
//	if(head == NULL){
//		head = tail = node;
//	}else{
//		Node *temp = head;
//		while(temp->next != NULL){
//			temp = temp->next;
//		}
//		temp->next = node;
//		tail = node;
//	}
//}
//void show_list(){
//	Node *temp = head;
//	while(temp != NULL){
//		cout << temp->data << "->";
//		temp = temp->next;
//	}
//	cout << "NULL" ;
//}
