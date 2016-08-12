// Program to count leaf nodes in a binary tree
// http://www.geeksforgeeks.org/write-a-c-program-to-get-count-of-leaf-nodes-in-a-binary-tree/

int leafCount(TreeNode *node){
	if(node==NULL)
		return 0;

	if(node->left == NULL && node->right == NULL){
		return 1;
	}

	return leafCount(node->left) + leafCount(node->right);

}