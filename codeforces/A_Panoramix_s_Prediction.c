#include <stdio.h>


int check_prime(int n) {
    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}


int main() {

    int n, m;
    scanf("%d %d", &n, &m);
    while(1) {
        n++;
        int check = check_prime(n);
        if (check == 1) {
            if (n == m) {
                printf("YES\n"); return 0;
            } else {
                printf("NO\n"); return 0;
            }
        }
    }
    return 0;
}


