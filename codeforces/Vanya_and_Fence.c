#include <stdio.h> 

int main() {
    int nbr_friends, height_fence, height_friend, minSize = 0;
    scanf("%d %d", &nbr_friends, &height_fence);
    for (int i = 0; i < nbr_friends; i++) {
        scanf("%d", &height_friend);
        if (height_fence >= height_friend) minSize += 1;
        else minSize += 2;
    }
    printf("%d", minSize);
    return 0;
}

