#include <stdio.h>
#include <string.h>



int main() {
	
	int n;
	scanf("%d", &n);
	
	char *T[n];
	char team1[n], team2[n];
	
	for (int i = 0; i < n; i++) {
		scanf("%s", T[i]);
		if (i == 0) strcpy(team1, T[i]);
		if (strcmp(team1, T[i]) != 0) {
			strcpy(team2, T[i]);
		}
	}
	
	
	int c1 = 0, c2 = 0;
	for (int i = 0; i < n; i++) {
		if (strcmp(team1, T[i]) == 0) c1++;
		else c2++;
	}
	
	if (c1 > c2) printf("%s\n", team1);
	else printf("%s\n", team2);
	
	return 0;
}






















