#include <stdio.h>
int main()
{
	double x = 0;
	double y = 0;
	scanf("%Lf %Lf", &x, &y);
	if (x == 0 && y == 0)
		printf("Origem");
	else if (y == 0)
		printf("Eixo X");
	else if (x == 0)
		printf("Eixo Y");
	else if (x > 0 && y > 0)
		printf("Q1");
	else if (x < 0 && y > 0)
		printf("Q2");
	else if (x < 0 && y < 0)
		printf("Q3");
	else if (x > 0 && y < 0)
		printf("Q4");
	return 0;
}