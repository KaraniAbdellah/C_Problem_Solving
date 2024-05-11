#include <stdio.h>
/*
long long int fib(int *F, int *N, int n, int *steps) {
    *(steps) += 1;
    if (N[n] == n) return F[n];
    else if (n == 0 || n == 1) {
        F[n] = n; N[n] = n;
    }
    else {
        N[n] = n; F[n] = fib(F, N, n - 2, steps) + fib(F, N, n - 1, steps);
    }
    return steps;
}

int main() {
    long long int F[1000], N[1000], n = 10;
    long long int steps = 0;
    printf("n = %lld --> %lld", n, fib(&F, &N, n, &steps));
    return 0;
}
*/
