// MOT DONE

// Swap nodes in a linked list without swapping data
// http://www.geeksforgeeks.org/swap-nodes-in-a-linked-list-without-swapping-data/

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

void swapNodes(node **head, int a, int b){
	node *temp=NULL, *first=NULL, *second=NULL;

	while((*head)!=NULL){
		if((*head)->data == a){
			first = (*head);
		}

		if((*head)->data == b){
			second = (*head);
		}

		(*head) = (*head)->next;
	}

	if(first==NULL || second==NULL){
		cout<<"No change"<<endl;
	}

	// swap(first->next, second->next);
	swap(first->data, second->data);
}

int main(){
   struct node *start = NULL;
 
    /* The constructed linked list is:
     1<-2<-3<-4<-5<-6<-7 */
    push(&start, 7);
    push(&start, 6);
    push(&start, 5);
    push(&start, 4);
    push(&start, 3);
    push(&start, 2);
    push(&start, 1);
 
    printf("\n Linked list before calling swapNodes() ");
    printList(start);
 
    swapNodes(&start, 4, 3);
 
    printf("\n Linked list after calling swapNodes() ");
    printList(start);

    return 0;
}


/*
Output 
7 3 2 
3 2
*/