#include <stdio.h>

// this last
int find_last_digit(int n) {
    if (n == 0) return 1;
    else if (n % 4 == 1) return 8;
    else if (n % 4 == 2) return 4;
    else if (n % 4 == 3) return 2;
    else if (n % 4 == 0) return 6;
} 

int main() {
    int n;
    scanf("%d", &n);
    printf("%d", find_last_digit(n));
    return 0;
}
