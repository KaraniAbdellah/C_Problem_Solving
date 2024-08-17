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
    for (int i = n - 1; i >  0; i--) {
            if (temp > T[i]) {
                if (count % 2 == 0) sereja += temp;
                else dima += temp;
                temp = T[i];
            } else {
                if (count % 2 == 0) sereja += T[i];
                else dima += T[i];
            }
            count++;
    }
    if (count % 2 == 0) sereja += temp;
    else dima += temp;
    printf("%d %d", sereja, dima);
    return 0;
}



























    
