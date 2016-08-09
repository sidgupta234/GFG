// Linked List, node deletion.
// Linked List | Linked List | Set 3 (Deleting a node)
// http://quiz.geeksforgeeks.org/linked-list-set-2-inserting-a-node/

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

	cout<<endl;
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

void deleteNode(struct node **head, int key){
	// dummyHead is useful if we have to remove the head,
	// with the help of dummyHead, checking separately for the head case is not required.
	node *dummyHead = new node;
	dummyHead->next = *head;
	node *temp = dummyHead;

	while( (temp->next!=NULL) && (temp->next->data != key) ){
		temp = temp->next;
	}

	if(temp->next==NULL){
		cout<<'Key not found'<<endl;
		return ;
	}

	temp->next = temp->next->next;
	*head = dummyHead->next;
}

int main(){
    node *head = NULL;
    //deleteNode(&head, 4);
	addLast(&head, 7);
    addLast(&head, 1);
    addLast(&head, 3);
    addLast(&head, 2);
    deleteNode(&head, 1);
    printList(head);
    //deleteNode(&head, 55);
    //printList(head);
    deleteNode(&head, 7);
    printList(head);
	return 0;
}

// The commenting lines are generating errors.

/*
Output 
7 3 2 
3 2
*/