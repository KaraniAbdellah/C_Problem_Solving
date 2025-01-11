#include <stdio.h>


int main() {
    int n, m, a;
    scanf("%d %d %d", &n, &m, &a);

    int count = 0, i, j;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (j == a) {
                count++;
            }
        }
        j = a;
    }
    return 0;
}



