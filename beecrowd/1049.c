#include <stdio.h>
#include <string.h>
int main() {
    char word1[20], word2[20], word3[20];
    scanf("%19s", word1); word1[20] = '\0';
    scanf("%19s", word2); word2[20] = '\0';
    scanf("%19s", word3); word3[20] = '\0';
    if (strcmp("vertebrado", word1) == 0) {
        if (strcmp("ave", word2) == 0) {
            if (strcmp("carnivoro", word3) == 0) {
                printf("aguia\n");
            } else  printf("pomba\n");
        } else {
            if (strcmp("onivoro", word3) == 0) {
                printf("homem\n");
            } else  printf("vaca\n");
        }
    } else {
        if (strcmp("inseto", word2) == 0) {
            if (strcmp("hematofago", word3) == 0) {
                printf("pulga\n");
            } else  printf("lagarta\n");
        } else {
            if (strcmp("hematofago", word3) == 0) {
                printf("sanguessuga\n");
            } else  printf("minhoca\n");
        }
    }
    return 0;
}













