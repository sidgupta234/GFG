// Find n’th node from the end of a Linked List
// http://www.geeksforgeeks.org/nth-node-from-the-end-of-a-linked-list/

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
0 			1 		2 .. n-1
n-1			n-2
n-1 = first + last 
first = length -1 - last
*/

int listLength(node *head){
	int length = 0;
	
	while(head){
		length++;
		head= head->next;
	}

	return length;
}

void printNthFromLast(node *head, int last){
	int fromLeft = listLength(head) - 1 - last;

	// if(fromLeft >= listLength(head)){
	// 	return;
	// }

	node *temp =head;
	int count = 0;

	while(temp && (count != fromLeft) ){
		count++;
		temp = temp->next;
	}

	if(temp && count==fromLeft)
		cout<<temp->data<<endl;
}

int main(){
  /* Start with the empty list */
  struct node* head = NULL;
 
  // create linked 35->15->4->20
  push(&head, 20);
  push(&head, 4);
  push(&head, 15);
  push(&head, 35);
  printNthFromLast(head, 3);
  return 0; 
}

/*
Output
20 
*/