#include <stdio.h>


int main() {

    int n, count = 0, x, k;
    scanf("%d %d", &n, &k);
    if (k == 0) {
        printf("1");
        return 0;
    }
    // k++;
    // char Digits[k + 1];

    getchar();
    for (int i = 0; i < n; i++) {
        scanf("%d", &x);
        int check = 0;
        while (x != 0) {
            for (int j = 0; j <= k; j++) {
                if (x % 10 == j) {
                    check++; break;
                } 
            }
            x = x / 10;
            if (check == 1) count++;
        }
    }

    printf("%d\n", count);
    return 0;
}


// Try to find a another solution that cover the part of math
// scanf("%[^\n]s", Digits);
//         int lenght = strlen(Digits);
//         printf("lenght = %d\n", lenght);
//         int sub_check, check;
//         sub_check = 0;
//         for (int j = 0; j < lenght; j++) {
//             check = 0;
//             printf("digit = %c\n", Digits[j]);
//             for (int p = 0; p < lenght; p++) {
//                 // printf("c = %c\n", ((char) (p + 48)));
//                 if ((char) (p + 48) == (int) Digits[j]) {
//                     check = 1;
//                     printf("check = %d\n", check);
//                     break;
//                 }
//             }
//             if (check == 1) sub_check++;
//             else break;
//         }
//         printf("sub %d\n", sub_check);
//         if (sub_check == k) count++;






