#include <stdio.h>



int main() {
    
    int b, n, d;
    scanf("%d %d %d", &n, &b, &d);
    int T[n];
    for (int i = 0; i < n; i++) scanf("%d", &T[i]);
    
    int count = 0, size = 0;
    for (int i = 0; i < n; i++) {
        if (T[i] <= b) size += T[i];
    }
    
    count = size / d;
    
    if (count == d) count--;
    
    printf("%d", count);
    
    return 0;
}






