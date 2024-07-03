#include <stdio.h>
int main() {
    int T[5][5], row, column;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            scanf("%d", &T[i][j]);
            if (T[i][j] == 1) {
                row = i;
                column = j;
            }
        }
    }
    row = row - 2;
    row = row < 0 ? -row: row;
    column = column - 2;
    column = column < 0 ? -column: column;
    printf("%d", row + column);
    return 0;
}
