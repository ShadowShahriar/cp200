#include <stdio.h>
int main()
{
	long long A = 0;
	long long B = 0;
	scanf("%lld %lld", &A, &B);
	A >= B ? printf("Yes") : printf("No");
	return 0;
}