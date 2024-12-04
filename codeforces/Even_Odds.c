#include <stdio.h>



int main() {
	
	long long int n, k;
	scanf("%lld %lld", &n, &k);
	
	long long int odds_num = n / 2;
	if (n % 2 != 0) {
		odds_num += 1;
	}
	long long int evens_num = n - odds_num;
	
	long long int re;
	if (k > odds_num) {
		k = k - odds_num;
		re = 2 * k;
	} else {
		re = 2 * (k - 1) + 1; 
	}
	
	printf("%lld", re);
	
	
	
	
	return 0;
}




