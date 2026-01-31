#include <stdio.h>
#include <stdlib.h>



int main() {
	
	
	int n;
	scanf("%d", &n);
	int T[n], min, min_index = 0;
	for (int i = 0; i < n; i++) {
		scanf("%d", &T[i]);
		if (i == 0) min = T[i];
		else if (T[i] < min) {
			min = T[i]; min_index = i;
		}
	}
	
	// Get the max number from min_index
	int max = T[min_index];
	for (int i = min_index + 1; i < n; i++) {
		if (max < T[i]) max = T[i];
	}
	
	// Get the profit
	int profit = max - min;
	if (profit < 0) profit = 0;
	printf("%d\n", profit);
	
	return 0;
}

















