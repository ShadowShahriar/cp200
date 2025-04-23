#include <stdio.h>
int main()
{
	long long n = 0;
	scanf("%lld", &n);
	printf("%lld", (n * (n + 1) / 2));
	return 0;
}