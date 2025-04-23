#include <stdio.h>
int main()
{
	long long x = 0;
	scanf("%lld", &x);
	while (x >= 10)
		x /= 10;
	if (x % 2 == 0)
		printf("EVEN");
	else
		printf("ODD");
	return 0;
}