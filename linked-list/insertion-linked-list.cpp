#include <bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	Node *next;

	Node(int x) {
		data = x;
		next = NULL;
	}
};

Node *insertAtBegin(Node *head, int target) {
	Node *temp = new Node(target);
	temp->next = head;
	return temp;
}

Node *insertAtEnd(Node *head, int target) {
	Node *temp = new Node(target);
	if (head == NULL) return temp;
	Node *curr = head;
	while (curr->next != NULL) {
		curr = curr->next;
	}
	curr->next = temp;
	return head;
}

int main() {
	Node *head = NULL;
	head = insertAtEnd(head, 10);
	head = insertAtEnd(head, 20);
	head = insertAtEnd(head, 30);
	return 0;
}