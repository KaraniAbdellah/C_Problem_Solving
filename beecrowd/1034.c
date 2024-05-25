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
	int sub = M, div, i = N - 1, multi, result = 0, count = 0;
	while (sub != 0 && i >= 0) {
		div = sub / blocks[i];
		multi = div * blocks[i];
		result += multi;
		sub = M - result;
		count += div;
		i--;
	}
	// printf("\ncount = %d\n", count);
	return count;
}


int main() {
	int T, M, N; // M : lenght || N : Numbers Of Blocks || T : Number of Test Cases
	int needed_blocks[1000], count = 0; 
	scanf("%d", &T);
	while (count < T) {
		if (scanf("%d %d", &N, &M) == -1) break;
		int blocks[N];
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





