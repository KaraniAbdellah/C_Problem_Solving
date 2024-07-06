#include <stdio.h>

int comparaision(char str1[], char str2[]) {
    char *p = str1, *q = str2;
    int re;
    for (; *p != '\0' ||  *q != '\0'; p++, q++) {
        if ((int) *p > 90) *p = (char) ((int) *p - 32);
        if ((int) *q > 90) *q = (char) ((int) *q - 32);
        re = (int) *p - (int) *q;
        // printf("p = %d \\ q = %d\n", (int) *p, (int) *q);
        if (re != 0) return re;
    }
    return 0;
}

int main() {
    char str1[101], str2[101];
    fgets(str1, 100, stdin);
    fgets(str2, 100, stdin);
    str1[101] = '\0'; str2[101] = '\0';
    int re = comparaision(str1, str2);
    if (re > 0) printf("1");
    else if (re < 0) printf("-1");
    else printf("0");
    return 0;
}




