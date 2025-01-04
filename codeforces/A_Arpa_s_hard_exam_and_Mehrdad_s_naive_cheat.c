#include <stdio.h>
#include <math.h>

// this last
int find_last_digit(int n) {
    long long int re = pow(1378, n);
    return n % 10;
} 

int main() {
    int n;
    scanf("%d", &n);
    printf("%d", find_last_digit(n));
    return 0;
}
