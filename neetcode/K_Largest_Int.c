#include <stdlib.h>
#include <stdio.h>


// find the Kth largest in Stream With Selection Sort Until K Times
void find_largest1(int T[], int n, int k) {
	
	// Selection in Decroissant Order
	int indexMin, temp;
	for (int i = 0; i < k; i++) {
		indexMin = i;
		for (int j = i + 1; j < n; j++) {
			if (T[indexMin] < T[j]) indexMin = j;
		}
		temp = T[indexMin];
		T[indexMin] = T[i];
		T[i] = temp;
	}
	printf("\nThe %d Largest Integer in Stream T is %d\n", k, T[k - 1]);
	// Complexity is O(n * k)
		
}


// T: table & k: number of eles
int *min_heap(int *T, int k) {
	
	int i = (k / 2) - 1;
	void heap(int i, int *T) {
		int min = i;
		int g = 2 * min + 1;
		int d = 2 * min + 2;
		if (g < k && T[min] > T[g]) {
			min = g;
		}
		if (d < k && T[min] > T[d]) {
			min = d;
		}
		
		if (min != i) {
			int temp = T[i];
			T[i] = T[min];
			T[min] = temp;
			heap(min, T);
		}
	}
	for (int j = i; j >= 0; j--) {
		heap(j, T);
	}
	return T;
	
}

// find largest using min-heap
int find_largest2(int *T, int n, int k) {
	
	int temp;
	for (int i = k; i < n; i++) {
		if (T[i] > T[0]) {
			temp = T[0];
			T[0] = T[i];
			T[i] = temp;
			min_heap(T, k);
		}
	}
	
	return T[0];
	
}


int main() {

	int n = 10, k = 1;
	int T[10] = {1, 2, 3, 4, 4, 5, 10, 100, 19, 18}; // 1
	
	// find_largest1(T, n, k);
	
	printf("The %d Largest Int In Stream T : %d\n", k, find_largest2(T, n, k));
	
	return 0;
	
}
















