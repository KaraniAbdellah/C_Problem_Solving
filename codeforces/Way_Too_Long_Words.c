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
    return i;
}

int main() {
    
    
    int n;
    scanf("%d", &n); getchar();
    char *result[n];
    for (int i = 0; i < n; i++) {
        int count = 0;
        char c;
        // get string
        char *str = (char *) calloc(MAX, sizeof(char));
        while ((c = getchar()) && c != '\n') {
            str[count] = c; count++;
        }
        str[count] = '\0';
        result[i] = (char *) malloc(sizeof(char) * count);
        if (count > 10) {
            int j = count - 2;
            int nbr_digits = getNbrDigits(j);
            result[i][0] = str[0];
            for (int k = 1; k <= nbr_digits; k++) {
                
                result[i][nbr_digits - k + 1] = (char) ((j % 10) + 48); 
                j /= 10;
                
            }
            result[i][nbr_digits + 1] = str[count - 1];
            result[i][nbr_digits + 2] = '\0';
        } else {
            strcat(result[i], str);
        }
    }
    
    for (int i = 0; i < n; i++) {
        
        if (i == n - 1) printf("%s", result[i]);
        else printf("%s\n", result[i]);
        
    }
    
    
    return 0;
}










