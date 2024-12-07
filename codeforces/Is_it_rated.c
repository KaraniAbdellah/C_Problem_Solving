#include <stdio.h>


int main() {
	int n;
	scanf("%d", &n);
	int T[n][2];
	for (int i = 0; i < n; i++) {
		scanf("%d %d", T[i][0], T[i][1]);
	}
	
	if (1) {
		printf("rated");
	} else if(1) {
		printf("unrated");
	} else {
		printf("maybe");
	}
	
	return 0;
}



