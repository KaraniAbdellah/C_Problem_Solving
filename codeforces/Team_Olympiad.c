#include <stdio.h>


int get_nbr_teams(int n);

int get_nbr_teams(int n) {
    int count = 0;
    while (n != 0) { 
        n = n / 3;
        count++;
    }
    return count;
}



int main() {
    
    int n;
    scanf("%d", &n);
    int S[n];
    for (int i = 0; i < n; i++) scanf("%d", &S[i]);
    
    // get number of teams
    int nbr_teams = get_nbr_teams(n);
    printf("%d\n", nbr_teams);
    for (int i = 0; i < nbr_teams; i++) {
        int R[3]; for (int i = 0; i < 3; i++) R[i] = -1;
        for (int j = 0; j < n; j++) {
            if (R[S[j] - 1] == -1 && S[j] != -1) {
                R[S[j] - 1] = j + 1;
                S[j] = -1;
            }
        }
        for (int i = 0; i < 3; i++) printf("%d ", R[i]);
        printf("\n");
    }
    
    return 0;
    
}













