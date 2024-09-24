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



int *min_heap() {
	
	
	
}

// find largest using min-heap
void find_largest2(int T[], int n, int k) {
	
	
	
}


int main() {

	int n = 10, k = 2;
	int T[10] = {10, -10, 23, 23, -109, 230, 23, 32, 45};
	
	find_largest1(T, n, k);
	
	return 0;
	
}
















