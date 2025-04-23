#include <stdio.h>
int main()
{
	int diff = 'a' - 'A';
	char x = 'a';
	scanf("%c", &x);
	if (x >= 'a' && x <= 'z')
		x -= diff;
	else if (x >= 'A' && x <= 'Z')
		x += diff;
	printf("%c", x);
	return 0;
}