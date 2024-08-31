#include <stdio.h>


int getIndex(int T[], int n, int searhed_value);


int getIndex(int T[], int n, int searhed_value) {
    
    int max = n - 1;
    int min = 0;
    int mid;
    while (min <= max) {
        
        mid = (max + min) / 2;
        
        if (T[mid] == searhed_value) return mid;
        else if (T[mid] < searhed_value) min = mid + 1;
        else max = mid - 1;
        
    }
    
    return -1;
    
}


int main() {
    
    int n, searhed_value;
    scanf("%d %d", &n, &searhed_value);
    int T[n];
    for (int i = 0; i < n; i++) scanf("%d", &T[i]);
    
    int result = getIndex(T, n, searhed_value);
    printf("%d", result);
    
    return 0;
}
















