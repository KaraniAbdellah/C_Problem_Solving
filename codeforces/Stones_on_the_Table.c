#include <stdio.h>


int main() {
    int n, c = 0;
    char s, p;
    scanf("%d", &n); getchar();
    for (int i = 0; i < n; i++) {
        scanf("%c", &s);
        if (i == 0) p = s;
        if (s == p && i != 0) c++;
        else p = s;
    }
    printf("%d", c);
    return 0;
}


