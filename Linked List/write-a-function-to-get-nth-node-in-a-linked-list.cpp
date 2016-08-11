// Write a function to get Nth node in a Linked List
// http://www.geeksforgeeks.org/write-a-function-to-get-nth-node-in-a-linked-list/

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

/* pseudo code.
node * func(head, n)
	temp = head
	count = 0
	while(temp && count!=n)
		temp = temp->next
		count++

	if(count == n)
		return temp

	else
		cout<<'nope'
		return NULL

*/

int GetNth(node *head, int n){
	int count = 0;
	node *temp = head;
	
	while(temp && count!=n){
		temp = temp->next;
		count++;
	}

	if(temp==NULL){
		cout<<"Your linked list is long than mine"<<endl;
		return -1;
	}

	return temp->data;
}

int main(){
    /* Start with the empty list */
    struct node* head = NULL;
   
    /* Use push() to construct below list
     1->12->1->4->1  */
    push(&head, 1);
    push(&head, 4);
    push(&head, 1);
    push(&head, 12);
    push(&head, 1);  
   
    /* Check the count function */
    printf("Element at index 0 is %d\n", GetNth(head, 0));  
    printf("Element at index 3 is %d\n", GetNth(head, 3));
    printf("Element at index 4 is %d\n", GetNth(head, 4));
    printf("Element at index 5 is %d\n", GetNth(head, 5));      
    return 0;
}

/*
Output 
Element at index 0 is 1
Element at index 3 is 12
Element at index 4 is 1
Your linked list is long than mine
Element at index 5 is -1
*/