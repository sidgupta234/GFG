// Linked List traversal.
// Linked List | Set 1 (Introduction)
// http://quiz.geeksforgeeks.org/linked-list-set-1-introduction/

#include <bits/stdc++.h>
using namespace std;

struct node{
	int data;
	node *next;
};


void printList(node *head){
	while(head){
		cout<<head->data<<' ';
		head = head->next;
	}
}

int main(){
	node *head = NULL;
	node *second = NULL;
	node *third = NULL;

	head = new node;
	second = new node;
	third = new node;

	head -> data = 1;
	head -> next = second;

	second -> data = 2;
	second -> next = third;

	third -> data = 3;
	third ->next = NULL;

	printList(head);

	return 0;
}
