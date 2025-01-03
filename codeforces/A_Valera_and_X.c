#include <stdio.h>


int check_diagonls_and_sequare(int n, char word[n][n]) {
    char temp = word[0][0];
    char not_temp = word[0][1];
    if (temp == not_temp) return 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) {
                if (word[i][j] == temp) continue;
                else return 0;
            }
            else if (j == n - i - 1) {
                if (word[i][j] == temp) continue;
                else return 0;
            } else if(word[i][j] == not_temp) {
                continue;
            } else return 0;
        }
    }
    return 1;

}

int main() {

    int n;
    scanf("%d", &n);
    char word[n][n];
    for (int i = 0; i < n; i++) {
        getchar();
        for(int j = 0; j < n; j++) {
            scanf("%c", &word[i][j]);
        }
    }

    // Check The Digonals & Sequare
    int check = check_diagonls_and_sequare(n, word);
    if (check == 1) printf("YES\n");
    else printf("NO\n");
    return 0;
}
