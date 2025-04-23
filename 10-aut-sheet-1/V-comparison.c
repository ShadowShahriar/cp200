#include <stdio.h>
int main()
{
	int A = 0;
	int B = 0;
	int C = -1;
	char S = '=';
	scanf("%d %c %d", &A, &S, &B);

	switch (S)
	{
	case '=':
		C = A == B;
		break;
	case '>':
		C = A > B;
		break;
	case '<':
		C = A < B;
		break;
	default:
		break;
	}

	if (C == 1)
		printf("Right");
	else
		printf("Wrong");
	return 0;
}