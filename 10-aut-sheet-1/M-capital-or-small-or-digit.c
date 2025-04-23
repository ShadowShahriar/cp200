#include <stdio.h>
int main()
{
	char X = 'A';
	scanf("%c", &X);
	if (X >= 'a' && X <= 'z')
		printf("ALPHA\nIS SMALL");
	else if (X >= 'A' && X <= 'Z')
		printf("ALPHA\nIS CAPITAL");
	else if (X >= '0' && X <= '9')
		printf("IS DIGIT");
	return 0;
}