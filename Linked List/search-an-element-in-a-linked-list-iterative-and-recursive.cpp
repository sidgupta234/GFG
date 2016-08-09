// Linked List, searching.
// Search an element in a Linked List (Iterative and Recursive)
// http://quiz.geeksforgeeks.org/search-an-element-in-a-linked-list-iterative-and-recursive/

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

bool search(node *head, int key){
	if(head==NULL)
		return false;

	if(head->data == key)
		return true;

	return search(head->next, key);
}


int main(){
    /* Start with the empty list */
    struct node* head = NULL;
    int x = 21;
 
    /* Use addLast() to construct below list
     14->21->11->30->10  */
    addLast(&head, 10);
    addLast(&head, 30);
    addLast(&head, 11);
    addLast(&head, 21);
    addLast(&head, 14);
 
    search(head, 21)? printf("Yes") : printf("No");
    return 0;
}


/*
Output
Yes
*/
