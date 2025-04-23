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
	// interval X
	long long Xs = 0;
	long long Xe = 0;

	// interval Y
	long long Ys = 0;
	long long Ye = 0;

	// intersection
	long long Is = 0;
	long long Ie = 0;

	scanf("%lld %lld %lld %lld", &Xs, &Xe, &Ys, &Ye);
	if (Ys > Xe || Xs > Ye)
		printf("-1");
	else
	{
		Is = max(Xs, Ys);
		Ie = min(Xe, Ye);
		printf("%lld %lld", Is, Ie);
	}

	return 0;
}