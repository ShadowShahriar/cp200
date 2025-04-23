#include <stdio.h>
int main()
{
	long long A = 0;
	long long B = 0;
	scanf("%lld %lld", &A, &B);
	(A % B == 0 || B % A == 0) ? printf("Multiples") : printf("No Multiples");
	return 0;
}