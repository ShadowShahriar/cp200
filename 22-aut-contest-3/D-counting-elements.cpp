#include <iostream>
#include <vector>
#include <algorithm>
typedef long long ll;
using namespace std;

int main()
{
	ll n;
	cin >> n;

	vector<ll> v;
	ll c = 0;
	for (ll i = 0; i < n; i++)
	{
		ll x;
		cin >> x;
		v.push_back(x);
	}

	for (ll i = 0; i < n; i++)
		if (find(v.begin(), v.end(), v[i] + 1) != v.end())
			c++;

	cout << c << endl;
	return 0;
}