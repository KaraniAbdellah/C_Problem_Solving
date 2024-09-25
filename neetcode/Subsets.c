#include <stdio.h>


int main() {
	
	int n = 4;
	int T[4] = {1, 2, 3, 4};
	
	for (int i = 0; i < n; i++) {
		printf("[%d]\n", T[i]);
		for (int j = i + 1; j < n; j++) {
			printf("[%d,%d]\n", T[i], T[j]);
		}
	}
	
	
	return 0;
	
}














