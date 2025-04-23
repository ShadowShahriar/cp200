#include <stdio.h>
#include <string.h>
int main()
{
	char F1[100] = {0};
	char F2[100] = {0};
	char S1[100] = {0};
	char S2[100] = {0};
	scanf("%s %s", &F1, &S1);
	scanf("%s %s", &F2, &S2);
	if (strcmp(S1, S2) == 0)
		printf("ARE Brothers");
	else
		printf("NOT");
	return 0;
}