#include <iostream>
#include <vector>
typedef long long ll;
using namespace std;

int main()
{
	ll n;
	cin >> n;

	vector<ll> v(n);
	for (ll i = 0; i < n; i++)
		cin >> v[i];

	for (ll i = 0; i < n / 2; i++)
		cout << v[i] << " " << v[n - i - 1] << " ";
	if (n % 2 != 0)
		cout << v[n / 2];
	return 0;
}