#include <stdio.h>
#include <stdlib.h>

/*
int getMax(int blocks[], int size) {
	int max = blocks[0];
	for (int i = 1; i < size; i++) {
		if (max < blocks[i]) max = blocks[i];	
	}
	return max;
}
*/

int find_blocks(int blocks[], int M, int N) {
	int count = 0, reset = M, div, multi, result = 0, count_blocks = N - 1;
	int max = blocks[count_blocks];
	// printf("\nStart Searching : \n");
	while (M > result) {
		max = blocks[count_blocks];
		multi = reset % max;
		div = reset / max;
		result += (div * max);
		if (count_blocks != 0) count_blocks--;
		count += div;
		reset = reset - result;
		// printf("\ncount = %d, max = %d, multi = %d, div= %d, result = %d\n", count, max, multi, div, result);
	}
	return count;
}


int main() {
	int T, M, N; // M : lenght || N : Numbers Of Blocks || T : Number of Test Cases
	int needed_blocks[1000], count = 0; 
	scanf("%d", &T);
	while (count < T) {
		if (scanf("%d %d", &N, &M) == -1) break;
		int blocks[N + 1];
		for (int i = 0; i < N; i++) {
			scanf("%d", &blocks[i]);
		}
		// Find The Minimum Needed Blocks
		needed_blocks[count] = find_blocks(blocks, M, N);
		// printf("\nNeeded Blocks Is %d\n", needed_blocks);
		count++;
	}
	for (int i = 0; i < T; i++) {
		printf("%d\n", needed_blocks[i]);
	}
	return 0;
}





