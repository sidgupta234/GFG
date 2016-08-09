// Linked List | Set 1 (Introduction)
// http://quiz.geeksforgeeks.org/stack-set-1/

// stack using arrays.

#include <bits/stdc++.h>
using namespace std;

struct Stack{
	int top;
	unsigned int capacity;
	int *array;
};

Stack* createStack(unsigned int capacity){
	Stack *stack = new Stack;
	stack->top = -1;
	stack->capacity = capacity;
	stack->array = new int [capacity];
}

bool isEmpty(Stack *stack){
	if(stack->top==-1)
		return true;

	return false;
}

bool isFull(Stack *stack){
	if(stack->capacity == stack->top+1)
		return true;

	return false;
} 

void push(Stack *stack, int data){
	stack->top++;
	stack->array[stack->top]=data;
}

int pop(Stack *stack){
	if(isEmpty(stack))
		return INT_MIN;

	return stack->array[stack->top--];

}

int peek(Stack *stack){
	return stack->array[stack->top];
}

int main(){
	Stack* stack = createStack(100);
 
    push(stack, 10);
    push(stack, 20);
    push(stack, 30);
 
    printf("%d popped from stack\n", pop(stack));
    printf("Top item is %d\n", peek(stack));
 
	return 0;
}

/*
Output 
30 popped from stack
Top item is 20
*/