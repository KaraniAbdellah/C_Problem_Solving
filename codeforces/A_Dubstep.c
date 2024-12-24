#include <stdio.h>
#include <string.h>

int main() {
    char word[200]; word[199] = '\0';

    scanf("%[^\n]", word);

    for (int i = 0; i < strlen(word); i++) {
        if (word[i] == 'W' && word[i + 1] == 'U' && word[i + 2] == 'B') word[i] = '1';
        else if (word[i] == 'U' && word[i - 1] == 'W' && word[i + 1] == 'B') {
            word[i] = '1';
            printf("hello U");
        }
        else if (word[i] == 'B' && word[i - 1] == 'U' && word[i - 2] == 'W') word[i] = '1';
        else printf("%c", word[i]);
    }

    return 0;

}


