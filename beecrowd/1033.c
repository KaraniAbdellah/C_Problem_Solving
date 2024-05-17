#include <stdio.h>
#include <stdlib.h>


#define MAX_SIZE 
long long int fib(long long int *F, long long int *N, long long int n) {
    if (n == 0 || n == 1) {
        F[n] = n; N[n] = n;
        return F[n];
    }
    else if (N[n] == n) {
        return F[n];
    }
    else {
        N[n] = n;
        F[n] = fib(F, N, n - 1) + fib(F, N, n - 2);
    }
    return F[n];
}


int main() {
    long long int n, base, rem, index, count = 1;
    while ((scanf("%lld %lld", &n, &base)) && (n != 0 || base != 0)) {
        // In Each Iteration
        rem = 0;
        long long int calls = 0, last_digit;
        long long int F[3000]; // *F = (long long int *) calloc(n + 3, sizeof(long long int));
        long long int N[3000]; // *N = (long long int *) calloc(n + 3, sizeof(long long int));
        if (F == NULL || N == NULL) {
            return 1;
        }
        for (int i = 0; i < n + 3; i++) {
        	F[i] = 0; N[i] = -1;
        }
        // Calculate The Number Of Calls
        long long int result_of_n_1 = fib(F, N, n + 1);
        // printf("\result_of_n_1 = %lld\n", result_of_n_1);
        calls = 2 * result_of_n_1 - 1;
        // printf("\ncalls = %lld\n", calls);
        // Translate To The Base
        last_digit = calls % base;
        // Print The Result
        printf("\nCase %lld: %lld %lld %lld\n", count, n, base, last_digit);
        count++;
        //free(F);
       //free(N);
    }
    return 0;
}













