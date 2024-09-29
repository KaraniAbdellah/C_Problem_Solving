#include <stdio.h>



// sort a table in decroissant order using selection sort
void sort_table(int *T, int n) {
	
	int indexMin, temp;
	for (int i = 0; i < n; i++) {
		indexMin = i;
		for (int j = i + 1; j < n; j++) {
			if (T[indexMin] < T[j]) indexMin = j;
		}
		temp = T[indexMin];
		T[indexMin] = T[i];
		T[i] = temp;
	}
	
}

int verification(int P[], int n, int begin, int ele) {	
	for (int i = begin; i < n; i++) {
		if (P[i] > ele) return 1;
	}
	return 0;
	
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
		for (int j = 0; j <= i; j++) {
			if (P[i] == T[j]) {
				int check = verification(P, n, i + 1, P[i]);
				if (check == 0) {
					printf("%d ", P[i]); P[i] = -1;
					for (int k = i - 1; k >= 0 && P[k] != -1; k--) {
						printf("%d ", P[k]); P[k] = -1;
					}
					printf("\n"); break;
				} else j = i;
			}
			if (j == i && P[i] != -1) {
				printf("\n"); break;
			}
		}
			
	}
	
	
	return 0;
	
}


















