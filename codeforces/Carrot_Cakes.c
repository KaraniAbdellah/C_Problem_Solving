#include <stdio.h>


int main() {
    int n, t, k, d;
    scanf("%d %d %d %d", &n, &t, &k, &d);
    int x_time = 0, nbr_cakes = 0;
    while (1) {
        if (nbr_cakes >= n) {
            printf("NO"); break;
        }
        x_time += t;
        nbr_cakes += k;
        if (x_time > d && nbr_cakes < n) {
            printf("YES"); return 0;
        }

    }
    
    
    // another idea
    int x_time = (n % k) == 0 ? (n / k) * t : ((n / k) + 1) * t;
    if (d + t < s) printf("YES");
    else printf("NO");
    
    return 0;
}
