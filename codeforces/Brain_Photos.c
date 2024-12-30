#include <stdio.h>


int main() {
	int n, m;
	scanf("%d %d", &n, &m);
	getchar();
	
	char c;
	int check = 0;
	
	// black-and-white if it has only white, black and grey pixels in it.
	// If there are any of cyan, magenta or yellow pixels in the photo then it is considered colored.
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			scanf("%c", &c); getchar();
			if (c == 'C' || c == 'Y' || c == 'M') {
					check = 1;
			}
		}
	}	
	
	
	if (check) printf("#Color");
	else printf("#Black&White");
	
	
	return 0;
}





