#include <iostream>
typedef long long int lli;
using namespace std;

int main()
{
	lli t;
	cin >> t;
	while (t--)
	{
		lli n, c0 = 0, c1 = 0;
		cin >> n;
		for (lli i = 0; i < n; i++)
		{
			lli x;
			cin >> x;
			if (x == 1)
				c1++;
			else if (x == 0)
				c0++;
		}
		if (c0 == c1 || (c0 == 0 && c1 > 0) || (c1 == 0 && c0 > 0))
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	return 0;
}