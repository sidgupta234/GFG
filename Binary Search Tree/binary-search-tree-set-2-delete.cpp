// http://quiz.geeksforgeeks.org/binary-search-tree-set-2-delete/
// Binary Search Tree | Set 2 (Delete)

struct BSTnode{
	int data;
	BSTnode *left;
	BSTnode *right;
};

// BSTNode* FindMin(BSTnode *root){
// 	if(root == NULL)
// 		return NULL;

// 	if(root->data < min(FindMin(root->left), FindMin(root->right) ) )
// 		return root->data;

// 	else if( FindMin(root->left) <  min(root->data, FindMin(root->right) ) )
// 		return FindMin(root->left);

// 	else
// 		return FindMin(root->right);
	 
// } 

BSTNode* Findmin(BSTnode *root){
	if(root == NULL)
		return NULL;

	else if( root->val < FindMin(root->left) )
		return root;

	else 
		return Findmin(root->left);
	// if( root->val < Findmin(root->left) )
	// return min(root->val, Findmin(root->left) );
}

BSTnode *Delete (BSTnode *root, int data) {
	if(root == NULL)
		return root;

	else if (data < root->data) 
		root->left = Delete(root->left, data);

	else if(data > root->data)
		root->right = Delete(root->right, data);

	else{
		if(root->left == NULL && root->right == NULL){
			delete root;
			root = NULL;
		}

		else if(root->left == NULL){
			BSTnode *temp = root;
 			root = root->right;
 			delete temp;
 			temp = NULL;
		}

		else if(root->right == NULL){
			BSTnode *temp = root;
 			root = root->left;
 			delete temp;
 			temp = NULL;
		}

		else{
			BSTnode *temp = FindMin(root->right);
			root->data = temp->data;
			root->right = Delete(root->right, temp->data);
		}

	}

	return root;
}