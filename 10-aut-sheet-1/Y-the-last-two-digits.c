#include <stdio.h>
int main()
{
	long long A = 0;
	long long B = 0;
	long long C = 0;
	long long D = 0;
	long long S = 0;

	scanf("%lld %lld %lld %lld", &A, &B, &C, &D);
	S = (A % 100) * (B % 100) * (C % 100) * (D % 100) % 100;
	printf("%llu%llu", S / 10, S % 10);
	return 0;
}