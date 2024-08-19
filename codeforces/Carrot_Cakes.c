#include <stdio.h>


int main() {
    int n, t, k, d;
    scanf("%d %d %d %d", &n, &t, &k, &d);
    int i = 1;
    int times = t;
    int nbr_cakes = 0;
    while (1) {
        nbr_cakes += k * i;
        if (nbr_cakes >= n) {
            break;
        }
        times += t;
        i++;
    }
    
    printf("times = %d\n", times);
    if (times <= d || nbr_cakes >= n) printf("NO");
    else printf("YES");
    
    return 0;
}
