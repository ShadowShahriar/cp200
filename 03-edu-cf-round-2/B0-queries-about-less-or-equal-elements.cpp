#include <iostream>
using namespace std;
typedef long long int lli;

lli getLeastCount(lli x[], lli y, lli w)
{
	lli z = 0;
	for (lli i = 0; i < w; i++)
		if (x[i] <= y)
			z++;
	return z;
}

int main()
{
	lli n = 0, m = 0;
	cin >> n >> m;

	lli a[n] = {0};
	lli b[m] = {0};
	lli i = 0;
	for (i = 0; i < n; i++)
		cin >> a[i];
	for (i = 0; i < m; i++)
	{
		cin >> b[i];
		cout << getLeastCount(a, b[i], n) << " ";
	}
	return 0;
}