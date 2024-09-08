#include <stdio.h>
#include <stdlib.h>





int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    char R[n];
    int i = 0, j = 0;
    while (i < n) {
        R[i] = 97 + j;
        i++; j++;
        if (j == k) j = 0;
    }
    R[n] = '\0';
    printf("%s", R);
    
    return 0;
}












