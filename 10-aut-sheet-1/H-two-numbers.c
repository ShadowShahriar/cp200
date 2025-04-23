#include <stdio.h>
#include <math.h>
int main()
{
	double a = 0;
	double b = 0;
	scanf("%Lf %Lf", &a, &b);
	printf("floor %.0Lf / %.0Lf = %.0Lf\n", a, b, floor(a / b));
	printf("ceil %.0Lf / %.0Lf = %.0Lf\n", a, b, ceil(a / b));
	printf("round %.0Lf / %.0Lf = %.0Lf", a, b, round(a / b));
	return 0;
}