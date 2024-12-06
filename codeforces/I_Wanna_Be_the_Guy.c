#include <stdio.h>
#include <stdlib.h>



int main() {
	
	// read & define 
	int n, p, q;
	scanf("%d", &n);
	int R[n];
	scanf("%d", &p);
	int X[p];
	for (int i = 0; i < p; i++) {
		scanf("%d", &X[i]);
		R[X[i] - 1] = -1;
	}
	scanf("%d", &q);
	int Y[q];
	for (int i = 0; i < q; i++) {
		scanf("%d", &Y[i]);
		R[Y[i] - 1] = -1;
	}
	
	for (int i = 0; i < n; i++) {
		if (R[i] != -1) {
			printf("Oh, my keyboard!\n"); return 0;
		}
	}
	printf("I become the guy.\n");
	
	
	
	
	return 0;
}







