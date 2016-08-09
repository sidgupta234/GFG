// Stack | Set 1 (Introduction)
// http://quiz.geeksforgeeks.org/stack-set-1/

// stack using LL.

#include <bits/stdc++.h>
using namespace std;

struct Stacknode{
	int data;
	Stacknode *next;
};

bool isEmpty(Stacknode *top){
	if(top == NULL)
		return true;

	return false;
}

void push(Stacknode **top, int data){
	Stacknode *newnode = new Stacknode;
	newnode->data = data;
	newnode->next = *top;
	*top = newnode;
	printf("%d pushed to stack\n", data);
}

int pop(Stacknode **top){
	if(isEmpty(*top)){
		cout<<"Empty"<<endl;
		return -1;
	}

	int val = (*top)->data;
	*top = (*top)->next;

	return val;
}

int peek(Stacknode *top){
	return top->data;
}

int main(){
    struct Stacknode* top = NULL;
 
    push(&top, 10);
    push(&top, 20);
    push(&top, 30);
 
    printf("%d popped from stack\n", pop(&top));
 
     printf("top element is %d\n", peek(top));
 
    return 0;
}

/*
Output 
10 pushed to stack
20 pushed to stack
30 pushed to stack
30 popped from stack
Top element is 20
*/