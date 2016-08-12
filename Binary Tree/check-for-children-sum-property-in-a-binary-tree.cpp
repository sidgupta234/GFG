/* 
http://www.geeksforgeeks.org/check-for-children-sum-property-in-a-binary-tree/

Check for Children Sum Property in a Binary Tree
Given a binary tree, write a function that returns true if the tree satisfies below property.
For every node, data value must be equal to sum of data values in left and right children. Consider data value as 0 for NULL children. 

*/

bool isEqual (TreeNode *root){
	if(root==NULL)
		return true;

	if( (root->left == NULL || root->left->val == 0 ) && (root->right == NULL || root->right->val == 0) ) 
		return isEqual(root->left) && isEqual(root->right);

	if(root->left->val + root->right->val == root->val)
		return isEqual(root->left) && isEqual(root->right);
	
	else
		return false;
}