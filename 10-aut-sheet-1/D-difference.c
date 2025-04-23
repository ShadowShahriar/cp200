#include <stdio.h>
int main()
{
	long long A = 0;
	long long B = 0;
	long long C = 0;
	long long D = 0;
	scanf("%lld %lld %lld %lld", &A, &B, &C, &D);
	printf("Difference = %lld", (A * B) - (C * D));
	return 0;
}