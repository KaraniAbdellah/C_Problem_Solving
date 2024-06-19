#include <stdio.h>
#include <stdlib.h>

void print_the_result(char *str1, char *str2, char *str, char *str0) {
    int days, hours, minutes, seconds;
    int begin_day, end_day;
    int begin_hour, begin_minute, begin_second;
    int end_hour, end_minute, end_second;
    // Extract start day and time
    sscanf(str, "Dia %d", &begin_day);
    sscanf(str1, "%d : %d : %d", &begin_hour, &begin_minute, &begin_second);
    // Extract end day and time
    sscanf(str0, "Dia %d", &end_day);
    sscanf(str2, "%d : %d : %d", &end_hour, &end_minute, &end_second);
    // Calculate total seconds from start to end
    int total_begin_seconds = begin_hour * 3600 + begin_minute * 60 + begin_second;
    int total_end_seconds = end_hour * 3600 + end_minute * 60 + end_second;
    int total_seconds = total_end_seconds - total_begin_seconds;
    // Calculate days
    days = end_day - begin_day;
    // Adjust if seconds are negative
    if (total_seconds < 0) {
        total_seconds += 86400;  // 86400 seconds in a day
        days--;  // Adjust days accordingly
    }
    // Calculate hours, minutes, and seconds
    hours = total_seconds / 3600;
    total_seconds %= 3600;
    minutes = total_seconds / 60;
    seconds = total_seconds % 60;
    // Output the result
    printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)\n", days, hours, minutes, seconds);
}

int main() {
    char str1[20], str2[20], str[20], str0[20];
    // Read input
    scanf("%[^\n]%*c", str);
    scanf("%[^\n]%*c", str1);
    scanf("%[^\n]%*c", str0);
    scanf("%[^\n]%*c", str2);
    // Call function to compute and print result
    print_the_result(str1, str2, str, str0);

    return 0;
}

