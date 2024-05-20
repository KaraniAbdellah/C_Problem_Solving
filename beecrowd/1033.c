#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <inttypes.h>

// Wrong Answer 5%
int64_t fib(int64_t n) {
	if (n <= 1) return n;
	int64_t U = 0, V = 1, W;
	for (int i = 2; i < n + 1; i += 2) {
		W = U + V;
		V = U;
		U = W;
		if (i != 2) {
			W = U + V;
			V = U;
			U = W;
		}
	}
	printf("\nW = %jd\n", W);
	return W;
}

int64_t getLastDigit(int64_t base, int64_t number) {
    while (number >= base) {
        number = number % base;
    }
    return number;
}

int main() {
    int64_t n, base, count = 1, rem;
    while (1) {
		if ((scanf("%" PRId64 " %" PRId64, &n, &base)) == EOF || (n == 0 && base == 0)) break;
        int64_t result = fib(n + 1);
        int64_t calls_nbr = (2 * result) - 1;
        int64_t last_digit = getLastDigit(base, calls_nbr);
        printf("Case %" PRId64 ": %" PRId64 " %" PRId64 " %" PRId64 "\n", count, n, base, last_digit);
        count++;
    }
    return 0;
}






