#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <inttypes.h>
int64_t fib(int64_t n) {
	if (n <= 1) return n;
	else {
		int64_t W = 1, U = 0, V = 0;
		for (int i = 2; i < n + 1; i+= 2) {
			U = W + V;
			V = W;
			W = U;
			if (n != 2) {
				U = W + V;
				V = W;
				W = U;				
			}
		}
		return U;
	} 
}
int main() {
    int64_t n, base, count = 1;
    while (1) {
		if ((scanf("%" PRId64 " %" PRId64, &n, &base)) == EOF || (n == 0 && base == 0)) break;
        // Print The Result
        int64_t result = fib(n + 1);
        int64_t last_digit = (2 * result) - 1;
        last_digit = (last_digit) % base;
        // Print result with modulo
        printf("Case %" PRId64 ": %" PRId64 " %" PRId64 " %" PRId64 "\n", count, n, base, last_digit);

        count++;
    }
    return 0;
}

