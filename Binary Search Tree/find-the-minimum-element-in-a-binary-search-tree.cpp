// http://www.geeksforgeeks.org/find-the-minimum-element-in-a-binary-search-tree/
// Find the node with minimum value in a Binary Search Tree

int Findmin(BSTnode *root){
	if(root == NULL)
		return INT_MAX;

	return min(root->val, Findmin(root->left) );
}