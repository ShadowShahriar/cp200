#include <stdio.h>

int main()
{
	double number = 0.0;
	scanf("%Lf", &number);

	int number_int = (int)number;
	if (number_int == number)
	{
		printf("int %d", number_int);
		return 0;
	}

	float remainder = number - number_int;
	printf("float %d %.3f", number_int, remainder);
	return 0;
}