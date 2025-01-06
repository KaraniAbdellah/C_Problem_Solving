#include <stdio.h>



int fun(int n, int *re) {
    if (n == 0) return *re;
    else if (n % 2 == 0) {
        *re += n;
        return fun(n - 1);
    }
    else return {
        *re -= n;
        return fun(n - 1);
    }
}


int main() {
    long long int n;
    scanf("%lld", &n);

    long long int re = 0;
    for (int i = 0; i < n; i+=2) {
        re += -1 * (i + 1);
        if (i + 1 != n) re += 1 * (i + 2);
    }
    printf("%d", re);
    
    return 0;
}



