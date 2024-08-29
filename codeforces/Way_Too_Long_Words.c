#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#define MAX 101

int getNbrDigits(int n) {
    int i = 0;
    while(n != 0) {
        n /= 10;
        i++;
    }
}

char *toString(int n) {
    int nbr_digits = getNbrDigits(n);
    char *re = (char *) malloc(sizeof(char) * (nbr_digits + 1));
    for (int i = 0; i < nbr_digits; i++) {
        re[i] = (char) ((n / 10) + 48);
    }
    re[nbr_digits] = '\0';
}

int main() {
    
    
    int n;
    scanf("%d", &n); getchar();
    char *result = (char *) malloc(sizeof(char) * MAX);
    result[MAX] = '\0';
    int j = 0;
    for (int i = 0; i < n; i++) {
        int count = 0;
        char c;
        char *str = (char *) calloc(MAX, sizeof(char));
        while ((c = getchar()) && c != '\n') {
            str[count] = c; count++;
        }
        str[count] = '\0';
        if (count > 10) {
            result[j] = str[0];
            strcat(result, toString(count - 2));
            j += getNbrDigits(count - 2);
            result[j] = str[count - 1];
            j++;
        } else {
            strcat(result, str);
            j += count;
        }
        result[j] = '\n';
        j++;
    }
    result[j] = '\0';
    printf("%s", result);
    
    return 0;
}










