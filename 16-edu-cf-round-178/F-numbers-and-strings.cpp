#include <iostream>
#include <string>
#include <algorithm>
#include <set>
using namespace std;
typedef long long ll;

string sortstr(ll x)
{
	string s = to_string(x) + to_string(x + 1);
	sort(s.begin(), s.end());
	return s;
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		ll n;
		cin >> n;
		set<string> unique;
		for (ll i = 1; i <= n; i++)
			unique.insert(sortstr(i));
		cout << unique.size() << endl;
	}
	return 0;
}