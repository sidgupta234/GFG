// Binary Tree | Set 1 (Introduction)
//quiz.geeksforgeeks.org/binary-tree-set-1-introduction/
#include <bits/stdc++.h>
using namespace std;

struct node{
	int data;
	node *left;
	node *right;
};


node* newNode(int data){
	node* addNode = new node;
	addNode->data = data;
	addNode->left = addNode->right = NULL;
	return addNode;
}

int main(){
	/*create root*/
	node *root = NULL;
	root = newNode(1);
	/* following is the tree after above statement 

	   1
	 /   \
	NULL  NULL  
	 
	*/

	root->left = newNode(2);
	root->right = newNode(3);
	/* 2 and 3 become left and right children of 1
    
           1
         /   \
        2      3
     /    \    /  \
    NULL NULL NULL NULL
    
    */
	
	root->left->left = newNode(4);
	
	/* 4 becomes left child of 2
	           1
	       /       \
	      2          3
	    /   \       /  \
	   4    NULL  NULL  NULL
	  /  \
	NULL NULL
	*/

	return 0;
}