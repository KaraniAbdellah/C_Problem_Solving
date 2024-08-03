#include  <stdio.h>


int main() {
    int teams;
    scanf("%d", &teams);
    int games = teams * (teams - 1);
    int G[games], H[teams];
    for (int i = 0; i < teams; i++) {
        scanf("%d %d", &G[i], &H[i]);
    }
    
    // find number of games where the host team is going to play in the guest uniform.
    int count = 0;
    for (int i = 0; i < teams; i++) {
        int searched_ele = G[i];
        // using linear search
        for (int j = 0; j < teams; j++) {
            if (searched_ele == H[j]) count++;  
        }
    }
    printf("%d", count);
    return 0;
}

// time complexity is O(n^2) --> Quadrate Complexity


