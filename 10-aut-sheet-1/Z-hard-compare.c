#include <stdio.h>
#include <math.h>
int main()
{
	long long A = 0;
	long long B = 0;
	long long C = 0;
	long long D = 0;
	scanf("%lld %lld %lld %lld", &A, &B, &C, &D);
	if (B * log(A) > D * log(C))
		printf("YES");
	else
		printf("NO");
	return 0;
}