#include <stdio.h>
#include <stdlib.h>



int main() {
	
	// read & define 
	int n, p, q, level = 1, input;
	scanf("%d", &n);
	scanf("%d", &p);
	for (int i = 0; i < p; i++) {
		scanf("%d", &input);
	}
	scanf("%d", &q);
	for (int i = 0; i < q; i++) {
		scanf("%d", &input);
		if (level < n && level == input) {
			level++;
		}
	}
	
	if (level == n) printf("I become the guy.");
	else printf("Oh, my keyboard!");
	
	
	
	
	return 0;
}







