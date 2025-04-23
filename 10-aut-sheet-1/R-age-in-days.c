#include <stdio.h>
int main()
{
	long long period = 0;
	scanf("%lld", &period);

	long long years = period / 365;
	long long months = period % 365 / 30;
	long long days = period % 365 % 30;

	printf("%lld years\n", years);
	printf("%lld months\n", months);
	printf("%lld days", days);
	return 0;
}