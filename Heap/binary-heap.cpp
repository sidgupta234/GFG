// http://quiz.geeksforgeeks.org/binary-heap/
// Binary Heap

#include <bits/stdc++.h>

using namespace std;

class MinHeap{
 	int *array;
 	int capacity;
 	int heap_size;

 public:
 	void MinHeapify(int capacity);
 	void deleteKey(int i);
 	void insertKey(int k);
 	int extractMin();
 	
 	int parent(int i){
 		return (i-1)/2;
 	}

 	int left(int i){
 		return i*2+1;
 	}

 	int right(int i){
 		return i*2+2;
 	}
 };

MinHeap::MinHeap(int cap){
 	heap_size = 0;
 	capacity = cap;
 	array = new int [cap];
}

void MinHeap::insertKey(int k){
	
	if(heap_size == capacity){
		cout<<"Cannot insert further"<<endl;
		return;
	}

	heap_size++;
	int i = heap_size-1;
	array[i] = k;

	while(i!=0 && array[parent(i)]>array[i]){
		swap(array[i], array[parent(i)]);
		i = parent(i);
	}
}

void MinHeap::MinHeapify(int i){
	int l = left(i);
	int r = right(i);
	int smallest = i;

	if(l< heap_size && array[l]<array[i]){
		smallest = l;
	}

	if(r< heap_size && array[r]<smallest){
		smallest = r;
	}

	if(smallest!=i){
		swap(arr[i], arr[smallest]);
		MinHeapify(smallest);
	}
}