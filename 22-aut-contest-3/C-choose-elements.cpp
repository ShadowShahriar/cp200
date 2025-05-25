#include <iostream>
#include <vector>
#include <algorithm>
typedef long long int lli;
using namespace std;

int main()
{
	lli n, k, i;
	cin >> n >> k;

	vector<lli> v;
	for (i = 0; i < n; i++)
	{
		lli x;
		cin >> x;
		v.push_back(x);
	}
	sort(v.rbegin(), v.rend());

	lli s = 0;
	for (i = 0; i < k; i++)
	{
		if (v[i] <= 0)
			break;
		s += v[i];
	}

	cout << (s > 0 ? s : 0) << endl;
	return 0;
}
