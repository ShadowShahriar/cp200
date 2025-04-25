#include <iostream>
using namespace std;

int main()
{
	int n, p, q;
	string s;
	cin >> n >> p >> q >> s;

	int i, j;
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
			if (i * p + j * q == n)
				break;
		if (j <= n)
			break;
	}

	if (i > n && j > n)
	{
		cout << -1 << endl;
	}
	else
	{
		int k = 0, x, y;
		cout << (i + j) << endl;

		for (x = 0; x < i; x++)
		{
			for (y = 0; y < p; y++)
				cout << s[k++];
			cout << endl;
		}

		for (x = i; x < i + j; x++)
		{
			for (y = 0; y < q; y++)
				cout << s[k++];
			cout << endl;
		}
	}

	return 0;
}