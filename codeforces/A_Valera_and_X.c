#include <stdio.h>



int check_triangle(int n, char word[n][n]) {

    for (int i = 0; i <= n / 2; i++) {
        // printf("i = %d\n", i);
        for (int j = 0; j < n; j++) {
            // printf("wil be comparse: %c %c\n", word[i][n - j - 1], word[n - i - 1][j]);
            if (j < n - i - 1) {
                if (word[i][n - j - 1] == word[n - i - 1][j]) {
                    continue;
                } else return 0;
                // printf("compared: %c %c\n", word[i][n - j - 1], word[n - i - 1][j]);
            }


        }
    }
    return 1;

}

int check_diagonls(int n, char word[n][n]) {

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
    int check1 = check_triangle(n, word);

    // Check the digonals
    int check2 = check_diagonls(n, word);


    // printf("check1 = %d && check2 == %d\n", check1, check2);


    // print the result
    if (check1 && check2) printf("YES\n");
    else printf("NO\n");
    return 0;
}

