// Binary Search Tree | Set 1 (Search and Insertion)
// http://quiz.geeksforgeeks.org/binary-search-tree-set-1-search-and-insertion/

struct BSTnode{
	BSTnode *left, *right;
	int val;
};

BstNode* newNode (int data){
	BstNode newNode = new BstNode;
	newNode->data = data;
	newNode->left = newNode->right = NULL;
}

BSTNode* search(int val, BSTnode *node){
	if(node==NULL || node->val == val)
		return node;

	if( val < (node->val) )
		return search(val, root->left);

	return search(val, root->right);
}

BstNode* insert(BSTnode* root, int data){
	if(root==NULL){
		root = newNode(data);
		
	}

	else if(data <= root->data){
		root->left = insert(root->left, data);
	}

	else  (data > root->data){
		root->right = insert(root->right, data);
	}

	return root;
}


// void insert(int val, BSTnode **root, BSTnode *checkAt){
	
// 	if(*root==NULL){
// 		BSTnode *node = new BSTnode;
// 		node->val = val;
// 		*root = node;
// 		return; 	
// 	}

// 	if(checkAt==NULL){
// 		BSTnode *node = new BSTnode;
// 		node->val = val;
// 		checkAt = node;
// 		return ;
// 	}

// 	if(val < checkAt->val){
// 		insert(val, *root, checkAt->left);
// 	}

// 	else{
// 		insert(val, *root, checkAt->right;	
// 	}

// }