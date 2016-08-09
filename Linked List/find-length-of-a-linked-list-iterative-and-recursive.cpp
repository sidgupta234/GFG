// Find Length of a Linked List (Iterative and Recursive)
// http://quiz.geeksforgeeks.org/find-length-of-a-linked-list-iterative-and-recursive/

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

int lengthRec(node *head){
	if(head==NULL)
		return 0;

	return 1 + lengthRec(head->next);
}

int lengthIter(node *head){
	int count = 0;
	
	while(head){
		head = head->next;
		count++;
	}

	return count;
}

int main(){
    /* Start with the empty list */
    struct node* head = NULL;
 
    /* Use addLast() to construct below list
     1->2->1->3->1  */
    addLast(&head, 1);
    addLast(&head, 3);
    addLast(&head, 1);
    addLast(&head, 2);
    addLast(&head, 1);
 
    /* Check the count function */
    printf("count of nodes calculated recursively %d\n", lengthRec(head));
    printf("count of nodes calculated iteratively %d\n", lengthIter(head));
    return 0;
}


/*
Output
count of nodes calculated recursively 5
count of nodes calculated iteratively 5
*/
