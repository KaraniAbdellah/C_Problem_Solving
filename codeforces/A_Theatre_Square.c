#include <stdio.h>


int main() {
    long long int n, m, a;
    scanf("%lld %lld %lld", &n, &m, &a);
    
    long long int x, y;
    x = m / a;
    y = n / a;
    if (m % a != 0) x++;
    if (n % a != 0) y++;

    printf("%lld", x * y);
    return 0;
}



