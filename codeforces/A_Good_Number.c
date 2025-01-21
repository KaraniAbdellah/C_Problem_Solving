#include <stdio.h>
#include <string.h>

int main() {

    int n, count = 0, x, k;
    scanf("%d %d", &n, &k);
    k++;

    getchar();
    for (int i = 0; i < n; i++) {
        scanf("%d", &x);
        int check = 0;
        // printf("x = %d\n", x);
        while (x != 0) {
            if (check == k) break;
            for (int j = 0; j < k; j++) { 
                if (x % 10 == j) {
                // printf("x %% 10 = %d and j = %d\n", x % 10, j);
                    check++; break;
                }
            }
            x = x / 10;
        }
        if (check == k) count++;
    }

    printf("%d\n", count);
    return 0;
}
