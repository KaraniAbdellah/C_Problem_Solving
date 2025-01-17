#include <stdio.h>


int main() {

    int n, count = 0, x, k;
    scanf("%d %d", &n, &k);

    if (k == 0) {
        printf("1");
        return 0;
    }

    for (int i = 0; i < n; i++) {
        scanf("%d", &x);
        if (x % k == 0 && k != x) {
            count++;
        }
    }

    printf("%d\n", count);
    return 0;
}






