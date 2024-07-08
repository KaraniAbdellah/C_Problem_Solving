#include <stdio.h>
#include <stdbool.h>

int main() {
    char name[101];
    scanf("%s", name);
    int length = 0;
    bool check;
    for (int i = 0; name[i] != '\0'; i++) {
        check = true;
        for (int j = i + 1; name[j] != '\0'; j++) {
            if (name[i] == name[j]) { check = false; break; }
        }
        if (check == true) length++;
    }
    if (length % 2 == 0) printf("CHAT WITH HER!");
    else printf("IGNORE HIM!");
    return 0;
}



