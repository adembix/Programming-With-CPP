#pragma once
#include <iostream>
using namespace std;
template <class T>


class clsDblLinkedList
{
public:

	struct Node
	{
		T value;
		Node* next;
		Node* prev;
	};

	Node* head = NULL;

	void InsertAtBeginning(T value) {

		Node* new_node = new Node();
		new_node->value = value;
		new_node->next = head;
		new_node->prev = NULL;

		if (head != NULL) {
			head->prev = new_node;
		}

		head = new_node;
	}

	void InsertAfter(Node*& current, T value) {

		Node* new_node = new Node();
		new_node->value = value;

		if (current == NULL)
			return;
		
		if (current != NULL) {
			new_node->next = current->next;
			new_node->prev = current;
			current->next = new_node;
		}

		if (current->next != NULL)
			current->next = new_node;

	}

	void InsertAtEnd(T value) {

		Node* newNode = new Node();
		newNode->value = value;
		newNode->next = NULL;
		if (head == NULL) {
			newNode->prev = NULL;
			head = newNode;
		}
		else {
			Node* current = head;
			while (current->next != NULL) {
				current = current->next;
			}
			current->next = newNode;
			newNode->prev = current;
		}
	}

	void PrintList() {
		Node* temp = head;

		while (temp != NULL) {
			cout << temp->value << " ";
			temp = temp->next;
		}
	}

	Node* Find(T value) {

		Node* temp = head;

		while (temp != NULL) {
			if (temp->value == value)
				return temp;

			temp = temp->next;
		}

		return NULL;
	}

	void DeleteNode(Node*& NodeToDelete) {

		if (head == NULL || NodeToDelete == NULL) {
			return;
		}
		if (head == NodeToDelete) {
			head = NodeToDelete->next;
		}
		if (NodeToDelete->next != NULL) {
			NodeToDelete->next->prev = NodeToDelete->prev;
		}
		if (NodeToDelete->prev != NULL) {
			NodeToDelete->prev->next = NodeToDelete->next;
		}
		delete NodeToDelete;
	}

	void DeleteFirstNode() {
		if (head != NULL) {

			Node* temp = head;
			head = head->next;

			delete temp;

			if (head != NULL)
				head->prev = NULL;
		}
	}

	void DeleteLastNode() {

		Node* temp = head, *prev = head;

		if (temp == NULL)
			return;

		while (temp->next != NULL) {
			prev = temp;
			temp = temp->next;
		}

		prev->next = NULL;
		delete temp;
		
	}

};