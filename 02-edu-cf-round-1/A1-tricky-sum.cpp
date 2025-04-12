#include <iostream>
#include <math.h>
using namespace std;
typedef long long int lli;

int main()
{
	lli array[31] = {0};
	for (int i = 1; i <= 30; i++)
		array[i] = array[i - 1] + pow(2, i - 1);

	int t = 0;
	cin >> t;
	while (t--)
	{
		lli n = 0;
		cin >> n;

		lli excess = log2(n);
		lli sum = n * (n + 1) / 2;
		lli result = sum - 2 * array[excess + 1];
		cout << result << endl;
	}
	return 0;
}