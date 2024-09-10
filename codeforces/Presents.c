#include <stdio.h>

int main() {
    
    int n;
    scanf("%d", &n);
    int T[n], Ref[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &T[i]);
        Ref[T[i] - 1] = i + 1;
    }
    
    for (int i = 0; i < n; i++) printf("%d ", Ref[i]);
    
    
    return 0;
}








