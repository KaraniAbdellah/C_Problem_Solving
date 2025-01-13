#include <stdio.h>

// CoPrime Number [if the common factor is 1]
/*
    find (a, b, c) where (a, b) (b, c) are coprime 
    and (a, c) is not coprime
        l ≤ a < b < c ≤ r
*/

int main() {
    int l, r;
    scanf("%d %d", &l, &r);
    if (r - l == 1) {
        printf("-1\n");
        return 0;
    }

    int a, b, c;
    for (int i = l; i < r; i++) {

    }





    
    return 0;
}



