// Find the middle of a given linked list
// http://www.geeksforgeeks.org/write-a-c-function-to-print-the-middle-of-the-linked-list/

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
length = findLength(head)
middle = (n/2+1)th

*/

int findLength(node *head){
	node *temp = head;
	int length = 0;

	while(temp){
		temp=temp->next;
		length++;
	}

	return length;
}

void printMiddle(node *head){
	int length = findLength(head);
	int middle = length/2;
	int count =0;
	node *temp = head;
	

	while(temp && count != middle){
		temp = temp->next;
		count++;
	}

	if(count == middle)
		cout<<"middle element is "<<temp->data<<endl;
}

int main(){
    /* Start with the empty list */
    struct node* head = NULL;
    int i;
 
    for (i=5; i>0; i--){
        push(&head, i);
        printList(head);
        printMiddle(head);
    }
 
    return 0;
}

/*
Output
5
middle element is 5
5 4
middle element is 4
5 4 3
middle element is 4
5 4 3 2
middle element is 3
5 4 3 2 1
middle element is 3 
*/