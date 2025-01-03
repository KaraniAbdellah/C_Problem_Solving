#include <stdio.h>





int main() {

	int n, t;
	scanf("%d %d", &n, &t);
	
	if (n == 1 && t / 10 != 0) {
		printf("%d\n", -1);
		return 0;
	}
	
	int AddNumber = t;
	if (t == 10) AddNumber = 1;
	
	for (int i = 0; i < n; i++) {
		if (i == n - 1 && (t / 10) != 0) {
			printf("%d", 0);
		}
		else printf("%d", AddNumber);
	}
	
	
	return 0;

}



