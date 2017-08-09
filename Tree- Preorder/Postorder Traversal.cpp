/* you only have to complete the function given below.  
Node is defined as  

struct node
{
    int data;
    node* left;
    node* right;
};

*/

void preOrder(node *root) {
    if (root == NULL){
            return;
    }
    cout << root->data << " ";
    preOrder(root->left);
    preOrder(root->right);
}

void postOrder(node *root) {

	if (root == NULL){
		return;
	}

	if (root->left != NULL){
		postOrder(root->left);		
	}

	if (root->right != NULL){
		postOrder(root->right);
	}

	cout << root->data << " ";
}
