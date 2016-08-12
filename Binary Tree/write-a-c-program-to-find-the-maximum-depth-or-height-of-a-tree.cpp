// Write a Program to Find the Maximum Depth or Height of a Tree
// http://www.geeksforgeeks.org/write-a-c-program-to-find-the-maximum-depth-or-height-of-a-tree/

int HeightBT(Treenode* node){
	if(node==NULL)
		return 0;

	return max(HeightBT(node->left), HeightBT(node->right)) + 1;
}