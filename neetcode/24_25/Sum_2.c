#include <stdio.h>


int main() {
	
	// Define & Detting variables
	int n, target;
	scanf("%d %d", &n, &target);
	int T[n];
	for (int i = 0; i < n; i++)  scanf("%d", &T[i]);

	// Solution1 using frute force
	int check = 0;
	for (int i = 0; i < n; i++) {
		if (check) break;
		for (int j = i + 1; j < n; j++) {
			if (T[i] + T[j] == target) {
				printf("[%d, %d]\n", i + 1, j + 1); check = 1;
			} else if (T[i] + T[j] > target) break;
			else continue;
		}
	}
		
	// Solution2 using two pointers 
	int *p1 = T, *p2 = T + n;
	while (p1 < p2) {
		if (*p1 + *p2 > target) p2--;
		else if (*p1 + *p2 < target) p1++;
		else {
			printf("[%ld, %ld]\n", p1 - T + 1, p2 - T + 1); return 0;
		}
	}
	
	
	return 0;
	
}


