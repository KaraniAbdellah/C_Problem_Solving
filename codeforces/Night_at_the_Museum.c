#include <stdio.h>

int main() {
    char str[105];
    scanf("%[^\n]", str); str[100] = '\0';
    char a = 'a', max, min, v1, v2;
    int sum = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] > a) {
            max = str[i];  min = a;
        } else {
            max = a; min = str[i];
        }
        v1 = max - min;
        v2 = 26 - v1;
        if (v1 < v2) sum += v1;
        else sum += v2;
        a = str[i];
    }
    printf("%d", sum);
    return 0;
}
















