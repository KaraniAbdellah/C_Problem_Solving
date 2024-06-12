#include <stdio.h>
#include <stdlib.h>

void print_the_result(char *str1, char *str2, int start, int end) {
    int hours, minutes, seconds;
    int days = end - start;
    int *temp[3];
    // detecte the hours and minutes and second for two strings --> With Manual Method
    int index[6] = {0, 1, 5, 6, 10, 11};
    int count = 0;
    for (int i = 0; i < 3; i++) {
        temp[i] = malloc(sizeof(int) * 2);
        temp[i][0] = atoi(&str1[index[count]]);
        temp[i][1] = atoi(&str1[index[count + 1]]);
        count += 2;
    }
    for (int i = 0; i < 3; i++) printf("%d %d\n", temp[i][0], temp[i][1]);
}

int main() {
    int begin_event, end_event;
    char str1[20], str2[20];
    printf("Dia "); scanf("%d", &begin_event); getchar();
    scanf("%[^\n]", str1);
    printf("Dia "); scanf("%d", &end_event); getchar();
    scanf("%[^\n]", str2);
    print_the_result(str1, str2, begin_event, end_event);
    return 0;
}

