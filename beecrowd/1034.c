#include <stdio.h>
#include <stdlib.h>

int find_blocks(int blocks[], int M, int N) {
    int dp[M + 1];
    for (int i = 0; i <= M; i++) {
        dp[i] = M + 1; // Initialize with a large number
    }
    dp[0] = 0;

    for (int i = 1; i <= M; i++) {
        for (int j = 0; j < N; j++) {
            if (blocks[j] <= i) {
                dp[i] = (dp[i] < dp[i - blocks[j]] + 1) ? dp[i] : dp[i - blocks[j]] + 1;
            }
        }
    }
    return (dp[M] > M) ? -1 : dp[M];
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





