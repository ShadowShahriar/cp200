#include <stdio.h>

long long max(long long A, long long B)
{
	return (A > B) ? A : B;
}

long long min(long long A, long long B)
{
	return (A > B) ? B : A;
}

int main()
{
	long long A = 0;
	long long B = 0;
	long long C = 0;
	scanf("%lld %lld %lld", &A, &B, &C);

	long long smallest = min(A, min(B, C));
	long long largest = max(A, max(B, C));
	long long average = A + B + C - smallest - largest;

	printf("%lld\n%lld\n%lld\n\n", smallest, average, largest);
	printf("%lld\n%lld\n%lld", A, B, C);
	return 0;
}