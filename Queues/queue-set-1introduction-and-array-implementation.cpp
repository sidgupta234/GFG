// Queue | Set 1 (Introduction and Array Implementation)
// http://quiz.geeksforgeeks.org/queue-set-1introduction-and-array-implementation/
// https://www.youtube.com/watch?v=okr-XE8yTO8
// queue using array.

#include <bits/stdc++.h>
using namespace std;

struct Queue{
	int front, rear;
	int capacity;
	int *array;
};


Queue* createQueue(unsigned capacity){
	Queue *queue = new Queue;
	queue->capacity = capacity;
	queue->front = queue->rear = -1; 
	queue->array = new int [capacity];
	return queue;
}

bool isFull(Queue *queue){
	return ( (queue->rear+1)%(queue->capacity)  == queue->front);
}

bool isEmpty(Queue *queue){
	return (queue->front == queue->rear && queue->rear == -1);
}

void enqueue(Queue *queue, int data){
	if (isFull(queue) )
		return;

	if (isEmpty(queue) )
		queue->front = queue->rear = 0;
	
	else{
		queue->rear = (queue->rear+1)%(queue->capacity);	
	}

		queue->array[queue->rear] = data;
		printf("%d enqueued to queue\n", data);
}

int dequeue(Queue *queue){
	if(isEmpty(queue))
		return INT_MIN;

	int item = queue->array[queue->front];
	

	if (queue->front == queue->rear){
		queue->front = queue->rear = -1;
	}

	else{
		queue->front = (queue->front +1)%queue->capacity;
	}

	return item;
}

int front(struct Queue *queue){
	if(isEmpty(queue))
		return INT_MIN;

	return queue->array[queue->front];
}

int rear(struct Queue *queue){
	if(isEmpty(queue))
		return INT_MIN;

	return queue->array[queue->rear];
}

int main(){
	struct Queue* queue = createQueue(1000);
 
    enqueue(queue, 10);
    enqueue(queue, 20);
    enqueue(queue, 30);
    enqueue(queue, 40);
 
    printf("%d dequeued from queue\n", dequeue(queue));
 
    printf("Front item is %d\n", front(queue));
    printf("Rear item is %d\n", rear(queue));
 	printf("%d dequeued from queue\n", dequeue(queue));
 	printf("%d dequeued from queue\n", dequeue(queue));
 	printf("%d dequeued from queue\n", dequeue(queue));
 	printf("%d dequeued from queue\n", dequeue(queue));
    enqueue(queue, 10);
    enqueue(queue, 20);
    enqueue(queue, 30);
 
 printf("%d dequeued from queue\n", dequeue(queue));
 
 
    return 0;
}

/*
Output
10 enqueued to queue
20 enqueued to queue
30 enqueued to queue
40 enqueued to queue
10 dequeued from queue
Front item is 20
Rear item is 40
20 dequeued from queue
30 dequeued from queue
40 dequeued from queue
-2147483648 dequeued from queue
10 enqueued to queue
20 enqueued to queue
30 enqueued to queue
10 dequeued from queue
*/