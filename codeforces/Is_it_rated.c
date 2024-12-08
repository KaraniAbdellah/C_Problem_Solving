#include <stdio.h>


int main() {
	int n;
	scanf("%d", &n);
	int T[n][2];
	for (int i = 0; i < n; i++) {
		scanf("%d %d", &T[i][0], &T[i][1]);
	}
	
	int order = 1;
	for (int i = 0; i < n; i++) {
		if (T[i][0] != T[i][1]) {
			printf("rated\n"); return 0;
		}
		if (i < n - 1 && T[i][0] >= T[i + 1][0]) {
			order++;
		}
	}
	
	
	if (order == n) printf("maybe\n");
	else printf("unrated\n");
	
	return 0;
}



