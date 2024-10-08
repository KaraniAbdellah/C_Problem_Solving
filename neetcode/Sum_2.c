#include <stdio.h>


int main() {
	
	/*
	int n, target;
	scanf("%d %d", &n, &target);
	for (int i = 0; i < n; i++) printf("%d", &T[i]);
	*/
	
	int target = 9, n = 5;  
	int T[5] = {1, 3, 4, 5, 7};
	
	int index1, index2;
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (T[i] + T[j] == target) {
				printf("[%d, %d]\n", i + 1, j + 1);
			} else if (T[i] + T[j] > target) break;
			else;
		}
	}
	
	// try to find another solution --> with two pointers
	
	
	
	
	
	
	
	
	
	
	return 0;
	
}


