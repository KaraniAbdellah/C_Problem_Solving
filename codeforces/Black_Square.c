#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main() {

    // get the calories wested
    int T[4];
    scanf("%d %d %d %d", &T[0], &T[1], &T[2], &T[3]);
    getchar();
    
    // get the strips touched
    char c; int count = 1;
    char *str = (char *) malloc(sizeof(char) * (count));
    while ((c = getchar()) != '\n' && c != EOF) {
        str[count - 1] = c;
        str = realloc(str, sizeof(str) * (count + 1));
        count++;
    }
    str[count - 1] = '\0';
    
    // get the sum of calories wested
    int length = strlen(str);
    int sum = 0;
    for (int i = 0; i < length; i++) {
        int index = (int) str[i] - 48;
        sum += T[index - 1];
    }
    // print the number of calories
    printf("%d", sum);
    return 0;
}

