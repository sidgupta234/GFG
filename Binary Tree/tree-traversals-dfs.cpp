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

void printPreorder(node* root){
	if(root==NULL)
		return;

	else{
		cout<<root->data<<' ';
		printPreorder(root->left);
		printPreorder(root->right);
	}
}

void printInorder(node* root){
	if(root==NULL)
		return;

	else{
		printInorder(root->left);
		cout<<root->data<<' ';
		printInorder(root->right);
	}
}

void printPostorder(node* root){
	if(root==NULL)
		return;

	else{
		printPostorder(root->left);
		printPostorder(root->right);
		cout<<root->data<<' ';
		
	}
}

int main(){
     struct node *root  = newNode(1);
     root->left             = newNode(2);
     root->right           = newNode(3);
     root->left->left     = newNode(4);
     root->left->right   = newNode(5); 
 
     printf("\nPreorder traversal of binary tree is \n");
     printPreorder(root);
 
     printf("\nInorder traversal of binary tree is \n");
     printInorder(root);  
 
     printf("\nPostorder traversal of binary tree is \n");
     printPostorder(root);
 
     getchar();
     return 0;
}

/*
Output
Preorder traversal of binary tree is
1 2 4 5 3
Inorder traversal of binary tree is
4 2 5 1 3
Postorder traversal of binary tree is
4 5 2 3 1
*/