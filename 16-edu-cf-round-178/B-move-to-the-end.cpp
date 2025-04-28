#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long ll;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		ll n;
		cin >> n;

		vector<ll> v;
		for (ll i = 0; i < n; i++)
		{
			ll x;
			cin >> x;
			v.push_back(x);
		}
		sort(v.begin(), v.end());

		vector<ll> v2(n + 1, 0);
		for (int i = n - 1; i >= 0; i--)
			v2[i] = v[i] + v2[i + 1];

		for (int i = 0; i <= n; i++)
			cout << v2[n - i] << " ";
		cout << endl;
	}
	return 0;
}