#include <stdio.h>


int main() {
    long long int n, m, a;
    scanf("%lld %lld %lld", &n, &m, &a);

    long long int count1 = 0, count2 = 0;
    for (long long int i = 0; i < n; i+=a) {
        count1++;
    }
    for (long long int j = 0; j < m; j+=a) {
        count2++;
    }
    printf("%lld", count1 * count2);
    return 0;
}



