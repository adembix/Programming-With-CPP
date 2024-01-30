#include <iostream>
using namespace std;

struct Node{
	int data = 0;
	Node* next = NULL;
};

int main()
{
	Node* head = NULL;

	// allocate 3 nodes in the heap
	Node* Node1 = new Node();
	Node* Node2 = new Node();
	Node* Node3 = new Node();

	Node1->data = 10;
	Node2->data = 20;
	Node3->data = 30;

	// Connect nodes
	Node1->next = Node2;
	Node2->next = Node3;
	Node3->next = NULL;

	head = Node1;

	while (head!=NULL) {
		cout << head->data << "  ";
		head = head->next;
	}
}
