#include <stdio.h>


int main() {
    int n, sereja = 0, dima = 0, temp;
    scanf("%d", &n);
    int T[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &T[i]);
    }
    temp = T[0];
    int count = 0;
    for (int i = n - 2; i >= 0; i--) {
        if (T[i] != -1) {
            if (temp > T[i]) {
                if (count % 2 == 0) sereja += temp;
                else dima += temp;
                temp = T[i];
            } else {
                if (count % 2 == 0) sereja += T[i];
                else dima += T[i];
                T[i] = -1;
            }
            count++;
        }

    }
    printf("%d %d", sereja, dima);
    return 0;
}


/*
    for (int i = 0; i < n; i++) {
        scanf("%d", &nbr_card);
        if (i == 0) {
            T[0] = nbr_card;
        } else {
            if (nbr_card > T[i - 1]) {
                for (int j = i - 1; j >= 0; j--) {
                    if (nbr_card > T[j]) {
                        temp = T[j];
                        T[j] = nbr_card;
                        T[j + 1] = temp;
                    } else break;
                }
            } else {
                T[i] = nbr_card;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) sereja += T[i];
        else dima += T[i];
    }
*/

























    
