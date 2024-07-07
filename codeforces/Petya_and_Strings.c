#include <stdio.h>
#include <string.h>
#include <ctype.h>




void comparison(char str1[], char str2[]) {
    char *p = str1, *q = str2;
    int re;
    for (; *p != '\0' &&  *q != '\0'; p++, q++) {
        if ((int) *p >= 97 && (int) *p <= 122) *p = (char) ((int) *p - 32);
        if (*q >= 97 && *q <= 122) *q = (char) ((int) *q - 32);
        re = (int) *p - (int) *q;
        if (re > 0) { printf("1"); return; }
        else if (re < 0) { printf("-1"); return; }
        else continue;
    }
    printf("0");
}

int main() {
    char str1[101], str2[101];
    scanf("%[^\n]", str1); getchar();
    scanf("%[^\n]", str2);
    str1[strlen(str1)] = '\0'; // Remove newline character from str1
    str2[strlen(str2)] = '\0'; // Remove newline character from str2
    comparison(str1, str2);
    return 0;
}




