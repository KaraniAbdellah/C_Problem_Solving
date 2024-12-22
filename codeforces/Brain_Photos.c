#include <stdio.h>


int main() {
	int n, m;
	scanf("%d %d", &n, &m);
	getchar();
	
	char T[n][m];
	
	// black-and-white if it has only white, black and grey pixels in it.
	// If there are any of cyan, magenta or yellow pixels in the photo then it is considered colored.
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			scanf("%c", &T[i][j]); getchar();
		}
	}	
	
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (T[i][j] == 'C' || T[i][j] == 'Y' || T[i][j] == 'M') {
					printf("#Color"); return 0;
			}
		}
	}
	printf("#Black&White");
	
	
	return 0;
}





