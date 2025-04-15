#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long int lli;

int main()
{
	lli m, n;
	cin >> n >> m;

	vector<lli> v;
	for (lli i = 0; i < n; i++)
	{
		lli x = 0;
		cin >> x;
		v.push_back(x);
	}
	sort(v.begin(), v.end(), greater<lli>());

	lli s = 0;
	for (lli i = 0; i < v.size(); i++)
	{
		s += v[i];
		if (s >= m)
		{
			cout << (i + 1) << endl;
			break;
		}
	}
	return 0;
}