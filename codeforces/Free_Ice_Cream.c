#include <stdio.h>

int main() {
    
    int n, distressed_kids = 0;
    long long int x;
    scanf("%d %lld", &n, &x); getchar();
    
    for (int i = 0; i < n; i++) {
        
        char signe, space;
        long long int number;
        scanf("%c%c%lld", &signe, &space, &number); getchar();
        
        if (signe == '+') {
            x += number;
        } else {
            if (x >= number) {
                x -= number;
            }
            else {
                distressed_kids++;
            }
        }
        
    }
    
    printf("%lld %d", x, distressed_kids);
    
    return 0;
}









