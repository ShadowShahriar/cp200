#include <stdio.h>
int main()
{
	double n = 0;
	scanf("%Lf", &n);

	if (n >= 0.0 && n <= 25.0)
		printf("Interval [0,25]");
	else if (n > 25.0 && n <= 50.0)
		printf("Interval (25,50]");
	else if (n > 50.0 && n <= 75.0)
		printf("Interval (50,75]");
	else if (n > 75.0 && n <= 100.0)
		printf("Interval (75,100]");
	else
		printf("Out of Intervals");
	return 0;
}