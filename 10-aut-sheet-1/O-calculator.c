#include <stdio.h>
int main()
{
	char operation = '*';
	long long A = 0;
	long long B = 0;
	long long C = 0;
	scanf("%lld%c%lld", &A, &operation, &B);
	switch (operation)
	{
	case '+':
		C = A + B;
		break;
	case '-':
		C = A - B;
		break;
	case '*':
		C = A * B;
		break;
	case '/':
		C = A / B;
		break;
	default:
		break;
	}
	printf("%lld", C);
	return 0;
}