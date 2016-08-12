// Level order traversal in spiral form
// http://www.geeksforgeeks.org/level-order-traversal-in-spiral-form/

int Ht(TreeNode *root){
	if(root==NULL)	
		return 0;

	return max(Ht(root->left), Ht(root->right));
}

void print(TreeNode *root){
	int height = Ht(root);
	bool ltr = true;

	for(int i=1; i<=h; i++){
		printAtLevel(ltr, root, i);
		ltr = !ltr;
	}
}

void printAtLevel(bool ltr, TreeNode* root, int level){
	if(level==1){
		cout<<root->data<<' ';
		return; 
	}
		

	if(ltr){
		printAtLevel(ltr, root->left, level-1);
		printAtLevel(ltr, root->right, level-1);
	}

	else{
		printAtLevel(ltr, root->right, level-1);
		printAtLevel(ltr, root->left, level-1);	
	}
}