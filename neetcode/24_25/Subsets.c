#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct Track {
	char *data;
	struct Track *left;
	struct Track *right;
} Track;



char *make_string(int a) {
	char *str = (char *) malloc(2 * sizeof(char));
	str[0] = (char) (a + '0');
	str[1] = '\0';
	return str;
}


void add_node(Track *root, char *str, int n, int *T) {
	
	if (n == 0) {
		printf("[%s]\n", str); return;
	}
	
	// allocate space for left and right
	root->left = (Track *) malloc(sizeof(Track));
	root->right = (Track *) malloc(sizeof(Track));
	
	// allocate space for string
    root->left->data = (char *) malloc((strlen(str) + 2) * sizeof(char));
    root->right->data = (char *) malloc((strlen(str) + 3) * sizeof(char));
	
	// handle the right and left data branch
	strcpy(root->left->data, str);
	strcpy(root->right->data, str);
	strcat(root->right->data, make_string(T[n - 1]));

	// recursively generate a subset
	add_node(root->left, root->left->data, n - 1, T);
	add_node(root->right, root->right->data, n - 1, T);
	
}




int main() {

	int n = 5;
	int T[5] = {1, 2, 3, 4, 5};
	
	Track *root = (Track *) malloc(sizeof(Track));
	add_node(root, "", n, T);
	
	
	return 0;
	
}














