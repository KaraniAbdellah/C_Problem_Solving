#include <stdio.h>



int main() {
    
    // get the data
    int n, m;
    scanf("%d", &n);
    int RE[n];
    for (int i = 0; i < n; i++) scanf("%d", &RE[i]);
    scanf("%d", &m);
    int T[m][2];
    for (int i = 0; i < m; i++) scanf("%d %d", &T[i][0], &T[i][1]);
    
    
    for (int i = 0; i < m; i++) {
        int nbr_wires = T[i][0] - 1;
        
        int right = RE[nbr_wires] - T[i][1];
        int left = RE[nbr_wires] - right - 1;
        int rest = RE[nbr_wires] - right - left - 1;
        
        RE[nbr_wires + 1] += right;
        RE[nbr_wires - 1] += left;
        RE[nbr_wires] = rest;
        
    }
    
    for (int i = 0; i < n; i++) printf("%d\n", RE[i]);
    
    
    return 0;
}






