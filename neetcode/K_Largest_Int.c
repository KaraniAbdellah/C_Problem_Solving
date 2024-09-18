#include <stdlib.h>
#include <stdio.h>



typedef struct Tree_Right {
	int data;
	struct Tree_Right *right;
	struct Tree_Right *left;
} Tree;


void add_int_tree(Tree **root, int data) {
	
	Tree *new_node = (Tree *) malloc(sizeof(Tree));
	new_node->data = data;
	new_node->right = new_node->left = NULL;
	
	if (*root == NULL) {
		*root = new_node; return;
	}
	
	if ((*root)->data < data) {
		if ((*root)->right == NULL) {
			(*root)->right = new_node; return;
		} else {
			free(new_node);
			add_int_tree(&((*root)->right), data);
		}
	} else {
		if ((*root)->left == NULL) {
			(*root)->left = new_node; return;
		} else {
			free(new_node);
			add_int_tree(&((*root)->left), data);
		}
	}
	
} 


// find the Kth largest in Stream using in_Order Traversal  
int find_larget_in_order(Tree *root, int k, int n) {

	// do this alone with in-order traversal please and understand it
	
	return result;	
		
}



int main() {

	Tree *root = NULL;
	int n = 10, k = 2;
	int T[10] = {10, -10, 23, 23, -109, 230, 23, 32, 45}; // 45
	
	for (int i = 0; i < n; i++) {
		add_int_tree(&root, T[i]);
	}
	
	// printf("%d  ", root->right->data);
	
	printf("The %d Largest Integer in Stream T is %d\n", k, find_larget_in_order(root, k, n));
	
	
	
	
	
	
	return 0;
}
















