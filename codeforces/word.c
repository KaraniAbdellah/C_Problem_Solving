#include <stdio.h>

// the length of uppercase is equal length of lowercase --> change it to the lowercase
// else --> change it to uppercase


int main() {
    char name[101];
    scanf("%s", name); name[100] = '\0';
    int lenghtOfLowercase = 0, lenghtOfUppercase = 0;
    for (int i = 0; name[i] != '\0'; i++) {
        if ((int) name[i] >= 97 && (int) name[i] <= 122) lenghtOfLowercase++;
        else lenghtOfUppercase++;
    }
    for (int i = 0; name[i] != '\0'; i++) {
        if (lenghtOfLowercase >= lenghtOfUppercase) {
            if ((int) name[i] < 97) name[i] = (char) ((int) name[i] + 32); // toLowercase
        }
        else {
            if ((int) name[i] >= 97) name[i] = (char) ((int) name[i] - 32); // toUppercase
        }
    }
    printf("%s", name);
    return 0;
}



