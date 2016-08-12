// Write Code to Determine if Two Trees are Identical
// http://www.geeksforgeeks.org/write-c-code-to-determine-if-two-trees-are-identical/

bool sameTree(node* Node1, node* Node2){
	if(Node1 == NULL && Node2 ==NULL)
		return true;

	if(Node1 == NULL || Node2 == NULL)
		return false;

	if(Node1->val == Node2->val)
		return sameTree(Node1->left, Node2->left) && sameTree(Node1->right, Node2->right);

	else 
		return false;
}