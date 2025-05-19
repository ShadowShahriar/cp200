#include <iostream>
#include <vector>
#include <numeric>
typedef long long ll;
using namespace std;

int main()
{
	ll n;
	cin >> n;

	ll minOdd = INT_MAX;
	vector<ll> v(n);
	for (ll i = 0; i < n; i++)
	{
		cin >> v[i];
		if (v[i] % 2 != 0)
			minOdd = min(v[i], minOdd);
	}

	ll sum = accumulate(v.begin(), v.end(), 0LL);
	if (sum % 2 == 0)
		cout << sum << endl;
	else
		cout << sum - minOdd << endl;
	return 0;
}