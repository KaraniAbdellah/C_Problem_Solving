#include <stdio.h>


int main() {
    int Y, W;
    scanf("%d %d", &Y, &W);
    int max, nbr_favorable;
    // max(Y, W)
    max = (Y > W) ? Y : W;
    // favorable cases
    nbr_favorable = 7 - max;
    // find the probability
    int nume = nbr_favorable, deno = 6;
    for (int i = nume; i >= 2; i--) {
        if (nume % i == 0 && deno % i == 0) {
            nume /= i; deno /= i;
        }
    }
    printf("%d/%d", nume, deno);
    return 0;
}




