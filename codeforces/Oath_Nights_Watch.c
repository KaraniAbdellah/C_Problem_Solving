#include <stdio.h>


int main() {
	
	int n, count = 0;
	scanf("%d", &n);
	int T[n];
	for (int i = 0; i < n; i++) scanf("%d", &T[i]);
	
	for (int i = 0; i < n; i++) {
		int c1 = 0, c2 = 0;
		for (int j = 0; j < n; j++) {
			if (j != i) {
				if (T[j] < T[i]) c1 = 1;
				if (T[j] > T[i]) c2 = 1;
			}
			if (c1 == 1 && c2 == 1) {
				count++; break;
			}
		}
		
	}
	printf("%d\n", count);
	
	return 0;
}


// find another way please






