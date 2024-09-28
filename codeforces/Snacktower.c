#include <stdio.h>



// sort a table in decroissant order using selection sort
void sort_table(int *T, int n) {
	
	int indexMin, temp;
	for (int i = 0; i < n; i++) {
		indexMin = i;
		for (int j = 0; j < n; j++) {
			if (T[indexMin] > T[j]) indexMin = j;
		}
		temp = T[indexMin];
		T[indexMin] = T[i];
		T[i] = temp;
	}
	
}

int main() {
	
	int n;
	scanf("%d", &n);
	int T[n], P[n];
	for (int i = 0; i < n; i++) {
		scanf("%d", &P[i]); T[i] = P[i];
	}
	
	sort_table(T, n);
	
	for (int i = 0; i < n; i++) {
		int check = 0;
		for (int k = 0; k < n; k++) {
			if (T[k] == P[i]) {
				for (int j = i; j >= 0 && P[j] != -1; j--) {
					printf("%d ", P[j]);
					P[j] = -1;
				}
				printf("\n"); check = 1; break;
			}
		}
		if (check == 0) printf("\n");
			
	}
	
	
	return 0;
	
}


















