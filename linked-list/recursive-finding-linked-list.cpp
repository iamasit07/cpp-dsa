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

int search(Node *head, int target) {
	if (head == NULL) return -1;
	if (head->data == target)
		return 1;
	else {
		int res = search(head->next, target);
		if (res == -1) return -1;
		else return (res + 1);
	}
}

int main() {
	Node *head = new Node(10);
	head->next = new Node(20);
	head->next->next = new Node(30);
	cout << search(head, 20);
	return 0;
}