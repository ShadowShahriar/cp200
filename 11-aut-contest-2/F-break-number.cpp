#include <iostream>
using namespace std;
typedef long long int lli;

int main()
{
	lli n, x, max = 0;
	cin >> n;
	lli arr[n];
	for (int i = 0; i < n; i++)
	{
		cin >> x;
		while (x % 2 == 0)
		{
			max++;
			x /= 2;
		}
		arr[i] = max;
		max = 0;
	}

	max = arr[0];
	for (int j = 0; j < n; j++)
		if (max < arr[j])
			max = arr[j];
	cout << max << endl;
	return 0;
}