#include <stdio.h>
#include <stdlib.h>


int main() {
	
	int n;
	scanf("%d", &n); getchar(); // get '\n'
	int *fillen = (int *) calloc(26, sizeof(int)); // spaces set to 0
	if (fillen == NULL) perror("calloc");
	
	char c;
	while ((c = getchar()) && c != '\n') {
		if (c < 'a') c = (int) c + 32;
		fillen[(int) c - 97] = 1;
	}
	
	
	for (int i = 0; i < 26; i++) {
		if (fillen[i] == 0) {
			printf("NO\n"); free(fillen); return 0;
		}
	}
	printf("YES\n");
	free(fillen);
	
	
	return 0;
	
}









