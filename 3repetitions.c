#include <stdio.h>
#include <string.h>

/* Submission details
Task:	Repetitions
Sender:	hahaharshil
Submission time:	2025-07-26 19:11:30 +0300
Language:	C
Status:	READY
Result:	ACCEPTED
*/

int main(){
	char s[1000000];
	scanf("%s", s);
	int max = 0;
	int series = 1;
	char lastchar;
	int n = strlen(s);
	
	for(int i = 0; i < n; i++){
		if(s[i] == lastchar){
			series++;
		}else{
			if(series > max){
				max = series;
			} 
			series = 1;
		}
		lastchar = s[i];
	}
	if(series > max){
		max = series;
	} //if the longest series is at the end.
	printf("%d", max);
	return 0;
}
