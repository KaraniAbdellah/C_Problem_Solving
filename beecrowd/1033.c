#include <stdio.h>

#define MAX_SIZE 20
/*
long long int fib(int F[], int N[], int *C, int n) {
    if (n == 0 || n == 1) {
        C[n] += 1;
        F[n] = n; N[n] = n;
        return F[n];
    }
    else if (N[n] == n) {
        C[n] += 2;
        return F[n];
    }
    else {
        C[n] += 1;
        N[n] = n;
        F[n] = fib(F, N, C, n - 1) + fib(F, N, C, n - 2);
    }
}
*/
long long int fib(int F[], int N[], int n) {
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
        return F[n];
    }
}


int main() {
    int n, base, rem, index, count = 1;
    while ((scanf("%d %d", &n, &base)) && (n != 0 || base != 0)) {
        // In Each Iteration
        rem = 0;
        long long int calls = 0, last_digit;
        int F[MAX_SIZE] = {0}, N[MAX_SIZE] = {-1};
        int result[n];
        // Calculate The Number Of Calls
        long long int result_of_n_1 = fib(F, N, n + 1);
        printf("\nresult = %lld\n", result_of_n_1);
        calls = result_of_n_1 - 1;
        printf("\ncalls = %lld\n", calls);
        // Translate To The Base
        last_digit = calls % base;
        // Print The Result
        printf("\nCase %d: %d %d %d\n", count, n, base, result[0]);
        count++;
    }

    return 0;
}













