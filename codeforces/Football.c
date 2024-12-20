#include <stdio.h>



int main() {
	
	int n;
	scanf("%d", &n);
	
	char team[10];
	team[9] = '\0';
	char temp[10];
	temp[9] = '\0';
		
	for (int i = 0; i < n; i++) {
		
		scanf("%s", team);
		if (i != 0) {
			int check = strcmp(team, temp);
			if (check > 0) {
				strcpy(temp, team);
			} else {
				strcpy(team, temp);
			}
		} else {
			strcpy(temp, team);
		}
	}
	
	return 0;
}






















