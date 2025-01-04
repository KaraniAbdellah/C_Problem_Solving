#include <stdio.h>

// this last
int find_last_digit(int n) {
    long long int re = 1378;
    for (int i = 1; i < n; i++) {
        re *= re;
    }
    return re % 10;
} 

int main() {
    int n;
    scanf("%d", &n);
    printf("%d", find_last_digit(n));
    return 0;
}
