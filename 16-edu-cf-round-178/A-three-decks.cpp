#include <iostream>
using namespace std;
typedef long long int lli;

int main()
{
	int t = 1;
	cin >> t;
	while (t--)
	{
		lli a, b, c, d;
		cin >> a >> b >> c;
		d = a + b + c;
		if (d % 3 == 0)
		{
			d /= 3;
			if (d >= a && d >= b && d <= c)
				cout << "YES" << endl;
			else
				cout << "NO" << endl;
		}
		else
			cout << "NO" << endl;
	}
	return 0;
}