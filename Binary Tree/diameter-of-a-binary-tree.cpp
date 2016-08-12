// Diameter of a Binary Tree
/*
The diameter of a tree (sometimes called the width) is the number of nodes on the longest path between two leaves in the tree.
 The diagram below shows two trees each with diameter nine, the leaves that form the ends of a longest path are shaded 
 (note that there is more than one path in each tree of length nine, but no path longer than nine nodes). */
// http://www.geeksforgeeks.org/diameter-of-a-binary-tree/


int Ht(TreeNode* root){
	if(root==NULL)
		return 0;

	return 1 + Ht(root->left, root->right);
}

int DiameterTree(TreeNode *root){
 	if(root==NULL)
 		return 0;

 	return max ( max ( DiameterTree(root->left), DiameterTree(root->right) ), Ht(root->left) +Ht(root->right) +1 )  ;
 }