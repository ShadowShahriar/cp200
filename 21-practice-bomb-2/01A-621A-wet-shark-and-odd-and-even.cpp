#include <iostream>
typedef long long ll;
using namespace std;

int main()
{
	ll n, sum = 0, fsum = 0;
	cin >> n;
	for (ll i = 0; i < n; i++)
	{
		ll x;
		cin >> x;
		sum += x;
		if (sum % 2 == 0)
			fsum = sum;
	}
	cout << fsum << endl;
	return 0;
}