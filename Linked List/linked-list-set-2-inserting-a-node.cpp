// inserting a node in a LinkedList.
// http://quiz.geeksforgeeks.org/linked-list-set-2-inserting-a-node/

#include<bits/stdc++.h>

using namespace std;

struct node{
	int data;
	node *next;
};

void addBegin(node **head, int data){
	// allocate node
	node *x = new node;

	// put data in node
	x->data = data;

	// make next of new node as head.
	x->next = *head;

	// make new node the new head.
	*head = x;
}


void addAfter(node *prevNode, int data){
	// check if the given node is NULL.
	if(prevNode==NULL){
		cout<<"error"<<endl;
		return;
	}

	// allocate new node.
	node *temp = new node;

	// put in data
	temp->data = data;

	// make the new node as next of prev.
	temp->next = prevNode->next;

	// move the next of prev_node to point the new node.
	prevNode->next = temp;
}

void addLast(node **head, int data){
	// allocate new node
	node *x = new node;

	// put in the data
	x->data = data;
	x->next = NULL;

	// get another pointer to point to head.
	node *last = *head;

	// if the LL is empty, then make the new node as head.
	if(*head==NULL){
		*head = x;
		return;
	}

	// else traverse till the last node.
	while(last->next){
		last = last->next;
	}

	// change the next of the last node.
	last->next = x;

}

void printList(node *head){
	while(head){
		cout<<head->data<<' ';
		head = head->next;
	}
}

int main(){
	struct node *head = NULL;

	addLast(&head, 6);
	addBegin(&head, 7);
	addBegin(&head, 1);
	addLast(&head, 4);
	addAfter(head->next, 8);
	printList(head);

	return 0;
}