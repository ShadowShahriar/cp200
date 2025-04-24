#include <iostream>
#include <vector>
using namespace std;
typedef int ll;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		ll n;
		ll x;
		cin >> n >> x;
		vector<int> Pm(n);

		if (x == 0)
		{
			for (ll i = 1; i < n; i++)
				Pm[i - 1] = i;
			Pm[n - 1] = 0;
		}
		else if (x == n)
		{
			for (ll i = 0; i < n; i++)
				Pm[i] = i;
		}
		else
		{
			ll i = 0;
			for (i = 0; i < x; i++)
				Pm[i] = i;
			for (ll j = x + 1; j < n; j++, i++)
				Pm[i] = j;
			Pm[i] = x;
		}
		for (ll i = 0; i < n; i++)
			cout << Pm[i] << " ";
		cout << endl;
	}
	return 0;
}