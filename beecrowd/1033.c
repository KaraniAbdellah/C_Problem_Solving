#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

intmax_t fib(intmax_t *F, intmax_t *N, intmax_t n) {
    if (n == 0 || n == 1) {
        F[n] = n;
        N[n] = n;
        return F[n];
    } else if (N[n] == n) {
        return F[n];
    } else {
        N[n] = n;
        F[n] = fib(F, N, n - 1) + fib(F, N, n - 2);
        return F[n];
    }
}

int main() {
    intmax_t n, base, count = 1;
    while (1) {
        if ((scanf("%jd %jd", &n, &base)) == -1 || (n == 0 && base == 0))
            break;
        // In Each Iteration
        intmax_t *F = (intmax_t *)calloc(n + 3, sizeof(intmax_t));
        intmax_t *N = (intmax_t *)calloc(n + 3, sizeof(intmax_t));
        if (F == NULL || N == NULL) {
            printf("\nOVERFLOW\n");
            return 1;
        }
        for (int i = 0; i < n + 3; i++) {
            F[i] = 0;
            N[i] = -1;
        }
        printf("\nresult = %jd\n", fib(F, N, n + 1));
        intmax_t last_digit = 2 * fib(F, N, n + 1) - 1;
        printf("\nCase %jd: %jd %jd %jd\n", count, n, base, last_digit % base);
        free(F);
        free(N);
        count++;
    }
    return 0;
}

