#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>




int main() {
	
	int *T1 = (int *) calloc(26, sizeof(int));
	int *T2 = (int *) calloc(26, sizeof(int));
	int i = 0; char c;
	while ((c = getchar()) && c != '\n') {
		T1[c - 'a'] += 1; i++;
	}

	i = 0;
	while ((c = getchar()) && c != '\n') {
		T2[c - 'a'] += 1; i++;
	}
	
	for (int i = 0; i < 26; i++) {
		if (T1[i] != T2[i]) {
			printf("false\n"); return 0;
		}
	}
	
	printf("true\n");
		
	return 0;
	
}












