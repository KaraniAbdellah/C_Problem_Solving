#include <stdio.h>


int main() {
    int t, a, b, n;
    scanf("%d", &t);
    for (int i = 0; i < t; i++) {
        scanf("%d %d %d", &n, &a, &b);
        for (int j = 0; j < n; j++) {
            if (j % 2 == 0) a++;
            else b++;
            if (a - 1 == b || b + 1 == a) {
                printf("NO\n"); break;
            } else if (b - 1 == a || b + 1 == a) {
                printf("YES\n"); break;
            } else if (a == n) {
                printf("YES\n"); break;
            }
            else if (b == n) {
                printf("NO\n"); break;
            }
        }
    }
}



