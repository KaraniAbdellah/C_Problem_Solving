#include <stdio.h>
#include <string.h>



int main() {
	
	int n;
	scanf("%d", &n);
	
	char team1[10]; team1[9] = '\0';
	char team2[10]; team2[9] = '\0';
	
	char teamOneFlag = '^'; 
	char teamTwoFlag = '&';
	char tempFlag = teamOneFlag;
	
	int teamOneCount = 0;
	int teamTwoCount = 0;	
	
	for (int i = 0; i < n; i++) {
		
		if (i == 0) {
			scanf("%s", team1); // QCCYXL
		} else {
			scanf("%s", team2); // AXGLFQDD
		}
		
		if (i != 0) {
			if (strcmp(team1, team2) == 0 && teamOneCount >= teamTwoCount) {
				tempFlag = teamOneFlag;
				teamOneCount++;
			} else {
				tempFlag = teamTwoFlag;
				teamTwoCount++;
			}
		}
	}
	
	if (tempFlag == teamOneFlag) printf("%s\n", team1);
	else printf("%s\n", team2);
	
	return 0;
}






















