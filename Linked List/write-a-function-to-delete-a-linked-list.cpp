// Write a function to delete a Linked List
// http://www.geeksforgeeks.org/write-a-function-to-delete-a-linked-list/

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

void push(node **head, int data){
	node *x = new node;

	x->data = data;
	x->next = NULL;

	node *last = *head;

	if(*head==NULL){
		*head = x;
		return;
	}

	while(last->next){
		last = last->next;
	}

	last->next = x;

}

/* pseudo code.
	function(head)
		if( head==NULL)
			return;
		else {
			function(head->next)
			delete head
		}
*/

void deleteList(node *temp){
	
	if(temp==NULL)
		return;

	deleteList( temp->next );
	delete temp;
}

int main(){
    /* Start with the empty list */
    struct node *head = NULL;

    push(&head, 1);
    push(&head, 4);
    push(&head, 1); 
    push(&head, 12);
    push(&head, 1);   
    
    printf("\n Deleting linked list\n");
    printList(head);
    deleteList(head);  
    printf("\n Linked list deleted\n");
}

/*
Output 
 Deleting linked list
1 4 1 12 1

 Linked list deleted
*/