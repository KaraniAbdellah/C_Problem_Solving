#include <stdio.h>




int main() {
	
	long long int n, k;
	scanf("%lld %lld", &n, &k);
	
	// find the odds & even numbers
	long long int even_count = 1;
	long long int odd_count = 1;
	long long int middle = n / 2;
	
	if (n % 2 != 0) {
		middle = (n / 2) + 1;
	}
	
	// find the k ele
	for (long long int i = 1; i <= n; i++) {
		if (i % 2 == 0) {
			if (middle + odd_count == k) {
				printf("%lld", i); break;
			} odd_count++;
		} else {
			if (even_count == k) {
				printf("%lld", i); break;
			} even_count++;
		}
	}
	
	
	
	
	return 0;
}




