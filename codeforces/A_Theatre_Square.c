#include <stdio.h>


int main() {
    int n, m, a;
    scanf("%d %d %d", &n, &m, &a);

    int start = a * a, i = 1;
    for (i = 0; start == n * m; i++) {
        start += start;
    }
    printf("%d", i);

    return 0;
}



