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

	while (n > 0)
	{
		cout << v[0] << " ";
		v.erase(v.begin());
		n--;

		if (n > 0)
		{
			cout << v[--n] << " ";
			v.pop_back();
		}
	}
	return 0;
}