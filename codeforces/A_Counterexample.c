#include <stdio.h>


/*
    (a, b) and (b, c) are coprime
    (a, c) is not coprime
*/

int main() {
    long long int l, r;
    scanf("%lld %lld", &l, &r);
    
    if (r - l == 1) {
        printf("-1\n");
        return 0;
    }

    if (l % 2 != 0) {
        l++;
    }

    printf("%lld %lld %lld", l, l + 1, l + 2);


    return 0;

}



