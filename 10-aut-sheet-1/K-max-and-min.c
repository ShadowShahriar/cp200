#include <stdio.h>
int main()
{
	long long A = 0;
	long long B = 0;
	long long C = 0;
	scanf("%lld %lld %lld", &A, &B, &C);

	long long max = 0;
	if (A >= B && A >= C)
		max = A;
	else if (B >= A && B >= C)
		max = B;
	else if (C >= A && C >= B)
		max = C;

	long long min = 0;
	if (A <= B && A <= C)
		min = A;
	else if (B <= A && B <= C)
		min = B;
	else if (C <= A && C <= B)
		min = C;

	printf("%lld %lld", min, max);
	return 0;
}