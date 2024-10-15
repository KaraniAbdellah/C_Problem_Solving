#include <stdio.h>

int main() {
	
	long long int n, k;
	scanf("%lld %lld", &n, &k);
	long long int even[n];
	long long int odd[n];
	
	// find the odds & evnes number
	long long int count1 = 0;
	for (int i = 1; i <= n; i++) {
		if (i % 2 == 0) {
			even[count1] = i; count1++;
		}
	}
	long long int count2 = 0;
	for (int i = 1; i <= n; i++) {
		if (i % 2 != 0) {
			odd[count2] = i; count2++;
		}
	}
	
	// find the result
	if ()
	
	
	
	
	return 0;
}




