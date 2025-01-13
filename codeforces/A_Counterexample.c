#include <stdio.h>





int main() {
    long long int l, r;
    scanf("%lld %lld", &l, &r);
    if (r - l == 1) {
        printf("-1\n");
        return 0;
    }

    // Suppose that a = l
    long long int a = l, b, c, div_a;
    // find the division for a
    long long int k = 2;
    while (k <= a) {
        if (a % k == 0) {
            div_a = k; break;
        }
        k++;
    }
    // printf("div_a = %d\n", div_a);

    // find c
    for (long long int i = r; i >= a + 1; i--) {
        if (i % div_a == 0) {
            c = i; break;
        }
    }

    // find b
    for (long long int i = a + 1; i < r && i != c; i++) {
        if (i % div_a != 0) {
            b = i; break;
        }
    }

    printf("%lld %lld %lld\n", a, b, c);






    
    return 0;
}



