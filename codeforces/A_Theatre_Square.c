#include <stdio.h>


int main() {
    long long int n, m, a;
    scanf("%lld %lld %lld", &n, &m, &a);

    if (a == n) {
        printf("%lld", a); return 0;
    }
    

    long long int count1 = 0, count2 = 0, j, i;
    for (i = 0, j = 0; i < n && j < m; i+=a, j+=a) {
        if (i < n) count1++;
        if (j < m) count2++;
    }
    printf("%lld", count1 + count2);
    return 0;
}



