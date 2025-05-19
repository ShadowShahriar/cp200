#include <iostream>
#include <vector>
#include <algorithm>
typedef long long ll;
using namespace std;

int main()
{
	ll n, sum = 0, fsum = 0;
	cin >> n;

	vector<ll> v(n);
	for (ll i = 0; i < n; i++)
		cin >> v[i];

	sort(v.rbegin(), v.rend());

	for (ll i : v)
	{
		sum += i;
		if (sum % 2 == 0)
			fsum = sum;
	}

	cout << fsum << endl;
	return 0;
}