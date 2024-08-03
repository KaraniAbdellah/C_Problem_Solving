#include <stdio.h>


int main() {
    int k, r, re = 1;
    scanf("%d %d", &k, &r);
    while (1) {
        int n = re * k;
        if (n % 10 == 0 || n % 10 == r) break;
        re++;
    }
    printf("%d", re);
    return 0;
}




