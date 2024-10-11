#include <stdio.h>



// Linear Search
int get_target_linear(int (*T)[4], int target, int x, int y) {
	
	for (int i = 0; i < x; i++) {
		for (int j = 0; j < y; j++) {
			if (T[i][j] == target) {
				return 1;
			}
		}
	}
	return -1;
	
}


// Binary Search
/*
	*(*T + 4):
		*T: first row
		*T + 4: pointer to case 4
		*(*T + 4): value of case 4
*/
int get_target_binary(int (*T)[4], int target, int x, int y) {
	
	int min = 0, max = (x * y) - 1;
	while (min < max) {
		int mid = (max + min) / 2;
		int value = *(*T + mid);
		if (value == target) return 1;
		else if (value < target) max = mid - 1;
		else min = mid + 1;
	}
	return -1;
	
	
}



int main() {
	
	int target = 10;
	int matrix[3][4] = {
		{1, 2, 4, 8},
		{10, 11, 12, 13},
		{14, 20, 30, 40}
	};
	
	int re_linear = get_target_linear(matrix, target, 3, 4);
	printf("RE = %d\n", re_linear);
	
	int re_binary = get_target_binary(matrix, target, 3, 4);
	printf("RE = %d\n", re_binary);
		
	
	return 0;
	
}
























