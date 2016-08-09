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

void deleteNodeAtPos(struct node **head, int pos){
	int curr = 0;
	// dummyHead is useful if we have to remove the head,
	// with the help of dummyHead, checking separately for the head case is not required.
	node *dummyHead = new node;
	dummyHead->next = *head;
	node *temp = dummyHead;

	while( temp->next != NULL && curr < pos ){
		temp = temp->next;
		curr++;
	}

	if(curr == pos){
		temp->next = temp->next->next;
		*head = dummyHead->next;
	}

	else{
        cout<<"your linked list is greater than my linked list.";
	}
}

int main(){
    /* Start with the empty list */
    struct node* head = NULL;

    addLast(&head, 7);
    addLast(&head, 1);
    addLast(&head, 3);
    addLast(&head, 2);
    addLast(&head, 8);

    puts("Created Linked List: ");
    printList(head);
    deleteNodeAtPos(&head, 0);

    puts("\nLinked List after Deletion at position 0: ");
    printList(head);

    puts("Created Linked List: ");
    printList(head);
    deleteNodeAtPos(&head, 3);

    puts("\nLinked List after Deletion at position 3: ");
    printList(head);

    puts("Created Linked List: ");
    printList(head);
    deleteNodeAtPos(&head, 10);

    puts("\nLinked List after Deletion at position 10: ");
    printList(head);

    puts("Created Linked List: ");
    printList(head);
    deleteNodeAtPos(&head, 1);

    puts("\nLinked List after Deletion at position 1: ");
    printList(head);

    return 0;
}


/*
Output
Created Linked List:
7 1 3 2 8

Linked List after Deletion at position 0:
1 3 2 8
Created Linked List:
1 3 2 8

Linked List after Deletion at position 3:
1 3 2
Created Linked List:
1 3 2
your linked list is greater than my linked list.
Linked List after Deletion at position 10:
1 3 2
Created Linked List:
1 3 2

Linked List after Deletion at position 1:
1 2
*/
