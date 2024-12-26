#include <stdio.h>
#include <string.h>

int main() {
    char word[200]; word[199] = '\0';
    int countU = 0;

    scanf("%[^\n]", word);
    int length = strlen(word);
    for (int i = 0; i < length; i++) {
        if (word[i] == 'B' && word[i - 1] == 'U' || word[i - 2] == 'W');
        else if (i < length - 1 && word[i] == 'W' && word[i + 1] == 'U' && word[i + 2] == 'B');
        else if (i > 0 && word[i] == 'U' && word[i + 1] == 'B' && word[i - 1] == 'W') {
            printf(" ");
        }
        else {
            printf("%c", word[i]);
        }
    }

    return 0;

}


