#include <stdio.h>


int main() {
    int n;
    scanf("%d", &n);

    int re = 0;
    for (int i = 1; i <= n; i++) {
        if (n % 2 == 0) {
            re += 1 * i;
        } else {
            re += -1 * i;
        }
    }
    printf("%d", re);
    
    return 0;
}



