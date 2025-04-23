#include <stdio.h>
int main()
{
	long long A = 0;
	long long B = 0;
	long long C = 0;
	long long R = 0;
	char S = '=';
	char Q = '=';
	scanf("%lld %c %lld %c %lld", &A, &S, &B, &Q, &C);

	switch (S)
	{
	case '+':
		R = A + B;
		break;
	case '-':
		R = A - B;
		break;
	case '*':
		R = A * B;
		break;
	default:
		break;
	}

	if (C == R)
		printf("Yes");
	else
		printf("%lld", R);

	return 0;
}