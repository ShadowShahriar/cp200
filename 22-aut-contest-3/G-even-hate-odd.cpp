#include <iostream>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n, ev = 0, od = 0;
		cin >> n;
		for (int i = 0; i < n; i++)
		{
			int x;
			cin >> x;
			if (x % 2 == 0)
				ev++;
			else
				od++;
		}

		if (ev == od)
			cout << 0;
		else if (n % 2 != 0)
			cout << -1;
		else
			cout << abs(ev - od) / 2;
		cout << endl;
	}
	return 0;
}