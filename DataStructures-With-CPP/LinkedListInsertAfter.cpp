#include <iostream>
using namespace std;

class Node
{
public:
	int Value;
	Node* Next;
};

void InsertAtBeginning(Node*& Head, int Value)
{
	Node* new_node = new Node();

	new_node->Value = Value;
	new_node->Next = Head;

	Head = new_node;
}

void PrintLinkedList(Node* Head)
{
	while (Head != NULL)
	{
		cout << Head->Value << " ";
		Head = Head->Next;
	}
}

Node* Find(Node* Head, int Value)
{
	while (Head != NULL) {
		if (Head->Value == Value)
			return Head;

		Head = Head->Next;
	}

	return NULL;
}

void InsertAfter(Node* prev_node, int value)
{
	if (prev_node == NULL) {
		cout << "\nThe Given Privious Node Cannot be NULL\n";
		return;
	}

	else
	{
		Node* new_node = new Node();
		new_node->Value = value;
		new_node->Next = prev_node->Next;
		prev_node->Next = new_node;
	}
}

int main() 
{

	Node* Head = NULL;

	InsertAtBeginning(Head, 10);
	InsertAtBeginning(Head, 20);
	InsertAtBeginning(Head, 40);

	PrintLinkedList(Head);
	cout << '\n';

	Node* prev_node = Find(Head, 20);

	InsertAfter(prev_node, 500);

	PrintLinkedList(Head);

}
