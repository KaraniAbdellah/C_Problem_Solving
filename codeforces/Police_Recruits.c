#include <stdio.h>

int main() {
    int events, event, p = 0, re = 0;
    scanf("%d", &events);
    for (int i = 0; i < events; i++) {
        scanf("%d", &event);
        if (event == -1) {
            if (p + event < 0) re++;
            else p -= 1;
        } else p += event;
    }
    printf("%d", re);
    return 0;
}




