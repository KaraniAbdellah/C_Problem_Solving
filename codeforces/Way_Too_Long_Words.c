#include <stdio.h>
#include <stdlib.h>


#define MAX 101


int main() {
    int n;
    scanf("%d", &n); getchar();
    for (int i = 0; i < n; i++) {
        int count = 0;
        char *str = (char *) calloc(MAX, sizeof(char));
        char c;
        while ((c = getchar()) && c != '\n') {
            str[count] = c; count++;
        }
        str[count] = '\0';
        if (count > 10) {
            printf("%c%d%c\n", str[0], count - 2, str[count - 1]);
        } else {
            printf("%s\n", str);
        }
    }
    return 0;
}





