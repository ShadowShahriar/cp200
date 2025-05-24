#include <iostream>
#include <algorithm>
#include <vector>
typedef long long int lli;
using namespace std;

int main()
{
	lli n;
	cin >> n;

	vector<lli> v;
	for (lli i = 0; i < n; i++)
	{
		lli x;
		cin >> x;
		if (x == 0)
			reverse(v.begin(), v.end());
		v.push_back(x);
	}

	for (lli i = 0; i < n; i++)
		cout << v[i] << " ";
	return 0;
}