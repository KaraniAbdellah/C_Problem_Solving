#include <stdio.h>
#include <stdlib.h>
#define MAX 100000


int main() {
    int n, nbr_a = 0, nbr_d = 0;
    scanf("%d", &n);
    getchar();
    char str[MAX];
    fgets(str, n + 1, stdin);
    for (int i = 0; i < n; i++) {
        if (str[i] == 'A') nbr_a += 1;
        if (str[i] == 'D') nbr_d += 1;
        
    }
    if (nbr_a > nbr_d) printf("Anton");
    else if (nbr_a < nbr_d) printf("Danik");
    else printf("Friendship");
    return 0;
}



