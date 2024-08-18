#include <stdio.h>
#include <stdint.h>


int main() {
    
    int64_t b, n, d;
    scanf("%ld %ld %ld", &n, &b, &d);
    int64_t T[n];
    for (int i = 0; i < n; i++) scanf("%ld", &T[i]);
    
    int64_t count = 0, size = 0;
    for (int i = 0; i < n; i++) {
        if (T[i] == d) count--;
        else if (T[i] <= b) size += T[i];
        else;
    }
    
    count = size / d;
    printf("%ld", count);
    
    return 0;
}






