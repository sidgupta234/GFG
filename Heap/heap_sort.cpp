// http://quiz.geeksforgeeks.org/heap-sort/
// Heap Sort
#include <bits/stdc++.h>

using namespace std;

// Using Min-Heap
void heapify(int array[], int capacity, int i){
	int smallest = i;
	int left = 2*i+1;
	int right = 2*i+2;

	if(left<capacity && array[left]<array[smallest]){
		smallest = left;
	}

	if(right<capacity && array[right]<array[smallest]){
		smallest = right;
	}	

	if(smallest!=i){
		swap(array[i], array[smallest]);
		heapify(array, capacity, smallest);
	}
}

void heapSort(int array[], int n){
// Build Heap
	for(int i=n/2 -1; i>=0; i--){
		heapify(array, n, i);
	}

// Extract Max.
	for(int i=n-1; i>=0; i--){
		cout<<array[0]<<' ';
		swap(array[0], array[i]);
		heapify(array, i, 0);	
	}
}

// void printArray(int arr[], int n)
// {
//     for (int i=0; i<n; ++i)
//         cout << arr[i] << " ";
//     cout << "\n";
// }
 
// Driver program
int main(){
    int arr[] = {12, 11, 13, 5, 6, 7};
    int n = sizeof(arr)/sizeof(arr[0]);
 
    heapSort(arr, n);
 
    cout << "Sorted array is \n";
    // printArray(arr, n);
}
