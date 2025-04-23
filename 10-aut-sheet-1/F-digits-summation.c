#include <stdio.h>
int main()
{
	long long a;
	long long b;
	scanf("%lld %lld", &a, &b);
	a = a % 10;
	b = b % 10;
	printf("%lld", a + b);
	return 0;
}