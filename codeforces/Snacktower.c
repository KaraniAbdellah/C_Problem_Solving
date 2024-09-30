#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>




int main() {
	
	int n;
	scanf("%d", &n);
	int T[n], P[n];
	
	int currentSnack = n;
	bool *fallen = (bool *) calloc(n + 1, sizeof(bool));

	for (int i = 0; i < n; i++) {
		int snack;
		scanf("%d", &snack);
		fallen[snack] = true;
		
		while (currentSnack > 0 && fallen[currentSnack]) {
		    printf("%d ", currentSnack);
		    currentSnack--;
		}
		printf("\n");
	}

	
	
	
	
	return 0;
	
}


















