#include <stdio.h>

int main() {
    
    
    int n;
    scanf("%d", &n);
    int T[n];
    for (int i = 0; i < n; i++) scanf("%d", &T[i]);
    for (int i = 0; i < n; i++) {
        
        long long int min1 = -10000000000, min2 = -10000000000, max1, max2, min, max;
        
        if (i + 1 < n) min1 = T[i] - T[i + 1];
        if (i - 1 >= 0) min2 = T[i] - T[i - 1];
        
        
        
        max1 = T[n - 1]- T[i]; // 2 + 7
        max2 = T[i] - T[0];
        
        // printf("min1 = %lld, min2 = %lld, max1 = %lld, max2 = %lld\n", min1, min2, max1, max2);
        
        if (min1 < 0) min1 = -min1;
        if (max1 < 0) max1 = -max1;
        
        
        
        if (min2 < 0) min2 = -min2;
        if (max2 < 0) max2 = -max2;
        
        if (min1 <= min2) min = min1;
        else min = min2;
        
        if (max1 >= max2) max = max1;
        else max = max2;
        

        
        printf("%lld %lld\n", min, max);
        
    }
    
    
    return 0;
}








