#include <stdio.h>

int main() {
    int n, one, two, three, count = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d %d %d", &one, &two, &three);
        if ((one == 1 && two == 1) || (two == 1 & three == 1) || (one == 1 && three == 1)) count++;
    }
    printf("%d", count);
    return 0;
}


