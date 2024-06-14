#include <stdio.h>
#include <stdlib.h>


// The Problem Is With If hours == 24 or minutes or seconds

void print_the_result(char *str1, char *str2, char *str, char *str0) {
    int hours, minutes, seconds;
    int days = atoi(&str0[4]) - atoi(&str[4]);
    // Get The Hours
    hours = atoi(&str2[0]) - atoi(&str1[0]);
    if (hours < 0) hours *= -1;
    hours = 24 - hours; 
    // Get The Minutes
    minutes = atoi(&str2[5]) - atoi(&str1[5]);
    if (minutes < 0) minutes *= -1;
    // Get The Seconds
    seconds = atoi(&str2[9]) - atoi(&str1[9]);
    if (seconds < 0) seconds *= -1;
    printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)\n", days, hours, minutes, seconds);
}


int main() {
    int begin_event, end_event;
    char str1[20], str2[20], str[20], str0[20];
    scanf("%[^\n]", str); getchar();
    scanf("%[^\n]", str1); getchar();
    scanf("%[^\n]", str0); getchar();
    scanf("%[^\n]", str2); getchar();
    print_the_result(str1, str2, str, str0);
    return 0;
}

