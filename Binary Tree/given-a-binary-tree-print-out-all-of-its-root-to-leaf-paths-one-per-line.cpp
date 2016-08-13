// Given a binary tree, print out all of its root-to-leaf paths one per line.
// http://www.geeksforgeeks.org/given-a-binary-tree-print-out-all-of-its-root-to-leaf-paths-one-per-line/

/*
pseudo code

	ans(root)
		v v i ans;
		leaf = count(root);

		while(leaf--){
			vi temp
			push val
			left
			right

		} 


*/

// vector <vector <int> > solve(TreeNode* root, vector <vector <int> >& ans ){
	
// 	if(root == NULL)
// 		return ans;

// 	vector <int> temp;

// }

// vector <vector <int> > LeafPaths(TreeNode* root){
// 	vector<vector <int> > ans;
// 	return solve(root, &ans);

// }
		
void printArray(TreeNode *root, int path[], int pathlen){
	for(int i=0;i<pathlen;i++){
		cout<<path[i]<<' ';
	}

	cout<<endl;
}

void printPath(TreeNode *root){
	int path[1000];
	int pathlen=0;
	paths(root, path[], pathlen)
}

void paths(TreeNode *root, int path[], int pathlen ){
	if(root==NULL)
		return;

	path[pathlen] = root->data;
	pathlen++;

	if(root->left==NULL && root->right==NULL){
		printArray(path, pathlen);
	}

	else{
		path(root->left, path, pathlen);
		path(root->right, path, pathlen);
	}	
}