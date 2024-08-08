#include <stdio.h>



int main() {
    int n, m;
    int T[m][2];
    int RE[n];
    
    // get the data
    scanf("%d", &n);
    for (int i = 0; i < n; i++) scanf("%d", &RE[i]);
    scanf("%d", &m);
    for (int i = 0; i < m; i++) scanf("%d %d", &T[i][0], &T[i][1]);
    
    // get the result
    int right, left, top, bottom;
    for (int i = 0; i < m; i++) {
        right = RE[T[i][0] - 1] - T[i][1];
        left = RE[T[i][0] - 1] - right - 1;
        top = T[i][0] - 2;
        bottom = T[i][0];
        RE[T[i][0] - 1] = RE[T[i][0] - 1] - right - left - 1;
        if (bottom < n) {
            RE[bottom] = RE[bottom] + right;
        }
        if (top >= 0) {
            RE[top] = RE[top] + left;
        }
    }
    
    for (int i = 0; i < n; i++) printf("%d\n", RE[i]);
    
    return 0;
}






