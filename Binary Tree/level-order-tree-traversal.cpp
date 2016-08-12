// Level Order Tree Traversal
// http://www.geeksforgeeks.org/level-order-tree-traversal/

#include <bits/stdc++.h>
using namespace std;

struct node{
	int data;
	node *left;
	node *right;
};


void printLevelOrder(node *temp){
	queue <node *> q;
	
	if(temp)
		q.push(temp);

	while(!q.empty()){
		temp = q.front();
		q.pop();
		cout<<temp->data<<' ';

		if(temp->left!=NULL)
			q.push(temp->left);

		if(temp->right!=NULL)
			q.push(temp->right);
	}

	cout<<endl;
}


node* newNode(int data){
	node* addNode = new node;
	addNode->data = data;
	addNode->left = addNode->right = NULL;
	return addNode;
}

int main(){
    struct node *root = newNode(1);
    root->left        = newNode(2);
    root->right       = newNode(3);
    root->left->left  = newNode(4);
    root->left->right = newNode(5);
 
    printf("Level Order traversal of binary tree is \n");
    printLevelOrder(root);
 
    return 0;
}


/*
Output
Level Order traversal of binary tree is
1 2 3 4 5
*/