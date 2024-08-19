#include <stdio.h>


int main() {
    int b, n, d;
    scanf("%d %d %d", &n, &b, &d);
    int T[n], count = 0, size = 0;;
    for (int i = 0; i < n; i++) {
        scanf("%d", &T[i]);
        if (T[i] <= b) size += T[i];
        if (size > d) {
            size = 0;
            count++;
        }
    }
    printf("%d", count);
    
    return 0;
}






