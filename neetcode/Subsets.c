#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct Track {
	char *data;
	struct Track *left;
	struct Track *right;
} Track;




void add_node(Track *root, int n) {
	if (n == 0) return;
	root->left = (Track *) malloc(sizeof(Track));
	root->right = (Track *) malloc(sizeof(Track));
	strcpy("1", root->left->data);
	strcpy(root->right->data, strcat(root->left->data, "1"));
	add_node(root->left, n - 1);
	add_node(root->right, n - 1);
}




int main() {

	int n = 4;
	int T[4] = {1, 2, 3, 4};
	Track *root = (Track *) malloc(sizeof(Track));
	root->left = root->right = NULL;
	root->data = "-";
	add_node(root, n);
	
	return 0;
	
}














