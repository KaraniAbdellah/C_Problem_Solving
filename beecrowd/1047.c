#include <stdio.h>

int main() {
    int a, b, c, d, hour, minute;
    scanf("%d %d %d %d", &a, &c, &b, &d);
    // Get Hour
    if (a > b) {
        hour = 24 - a + b;
    } else if (a < b) {
        hour = b - a;
    } else hour = 24;
    // Get Minute
    minute = d - c;
    if (minute < 0) {
        hour -= 1;
        minute = 60 + minute;   
    }
    if (hour == 24 && minute != 0) {
        hour = 0;
    } 
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", hour, minute);
    return 0;
}


