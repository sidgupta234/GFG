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

*/


int main(){
        
    return 0;
}

/*
Output 
*/