#include <stdio.h>


int main() {

    int n, count = 0, x, k;
    scanf("%d %d", &n, &k);
    // char Digits[k];
    if (k == 0) {
        printf("1");
        return 0;
    }

    // getchar();
    for (int i = 0; i < n; i++) {
        // scanf("%[^\n]s", Digits);
        // int sub_check = 0;
        // for (int j = 0; j < k; j++) {
        //     int check = 0;
        //     for (int p = 0; p < k; p++) {
        //         if (((char) p + '48') == Digits[j]) {
        //             check = 1;
        //             break;
        //         }
        //     }
        //     if (check == 1) sub_check++;
        //     else break;
        // }
        // if (sub_check == k) count++;
        scanf("%d", &x);
        int check = 0;
        while (x != 0) {
            check++;
            x = x / 10;
        }
        if (check == k + 1) count++;
    }

    printf("%d\n", count);
    return 0;
}


// Try to find a another solution that cover the part of math







