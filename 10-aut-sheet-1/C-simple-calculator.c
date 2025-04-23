#include <stdio.h>
int main()
{
	long long a = 0;
	long long b = 0;
	scanf("%lld %lld", &a, &b);
	printf("%lld + %lld = %lld\n", a, b, a + b);
	printf("%lld * %lld = %lld\n", a, b, a * b);
	printf("%lld - %lld = %lld", a, b, a - b);
	return 0;
}