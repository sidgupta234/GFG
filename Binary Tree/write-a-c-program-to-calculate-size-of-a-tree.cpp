// Write a program to Calculate Size of a tree
// http://www.geeksforgeeks.org/write-a-c-program-to-calculate-size-of-a-tree/

int size(node* TreeNode){
	if (TreeNode==NULL)
		return 0;

	else
		return size(TreeNode->left) + size(TreeNode->right) +1;
}

