#include <stdio.h>

int main()
{
	int t = 0;
	scanf("%d", &t);

	while (t--)
	{
		int x = 0;
		scanf("%d", &x);
		printf("%d\n", 2 * x);
	}
	return 0;
}