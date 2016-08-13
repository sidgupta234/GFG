// Find maximum (or minimum) in Binary Tree
// http://quiz.geeksforgeeks.org/find-maximum-or-minimum-in-binary-tree/

int FindMin(BSTnode *root){
	if(root == NULL)
		return INT_MAX;

	return min(root->val, min(FindMin(root->left), FindMin(root->right) )); 
}