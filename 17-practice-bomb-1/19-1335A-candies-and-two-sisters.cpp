#include <iostream>
typedef long long int lli;
using namespace std;

int main()
{
	lli t;
	cin >> t;
	while (t--)
	{
		lli n;
		cin >> n;
		if (n <= 2)
			cout << 0 << endl;
		else
		{
			if (n % 2 == 0)
				cout << (n / 2 - 1) << endl;
			else
				cout << (n / 2) << endl;
		}
	}
	return 0;
}