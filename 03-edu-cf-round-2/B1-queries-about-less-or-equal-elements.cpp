#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long ll;

int compare(int a, int b)
{
	if (a <= b)
		return 1;
	return 0;
}

int main()
{
	int n = 0, m = 0, i = 0;
	cin >> n >> m;

	vector<ll> v;
	for (i = 0; i < n; i++)
	{
		ll x;
		cin >> x;
		v.push_back(x);
	}
	sort(v.begin(), v.end());

	for (i = 0; i < m; i++)
	{
		ll y;
		cin >> y;
		auto z = lower_bound(v.begin(), v.end(), y, compare);
		cout << z - v.begin() << " ";
	}
	return 0;
}