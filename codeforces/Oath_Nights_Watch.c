#include <stdio.h>





int main() {
	
	// define the variable & find [min, max] in array
	int n, count = 0;
	scanf("%d", &n);
	int T[n], min, max;
	for (int i = 0; i < n; i++) {
		scanf("%d", &T[i]);
		if (i == 0) {
			min = T[0]; max = T[0];
		} else {
			if (T[i] > max) max = T[i];
			if (T[i] < min) min = T[i];
		}
	}
	
	
	
	// find the number of stewards
	for (int i = 0; i < n; i++) {
		int c1 = 0, c2 = 0;
		if (T[i] > min && T[i] < max) {
			count++;
		}
		
	}
	printf("%d\n", count);
	
	return 0;
}








