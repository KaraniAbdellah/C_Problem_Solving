#include <stdio.h>

int check_diagonls2(int n, char word[n][n]) {

    for (int i = 0; i < n; i++) {
        
    }
    return 1;
}

int check_diagonls1(int n, char word[n][n]) {

    char temp = word[0][0];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) {
                if (word[i][j] == temp) continue;
                else return 0;
            }
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

    // Check the Triangles
    int check1 = check_diagonls2(n, word);

    // Check the digonals
    int check2 = check_diagonls1(n, word);


    // printf("check1 = %d && check2 == %d\n", check1, check2);


    // print the result
    if (check1 && check2) printf("YES\n");
    else printf("NO\n");
    return 0;
}
