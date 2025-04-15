#include <iostream>
using namespace std;
typedef long long int lli;

lli power(lli x, lli n)
{
	lli y = 1;
	while (n--)
		y *= x;
	return y;
}

int main()
{
	lli x = 0, n = 0, s = 0;
	cin >> x >> n;
	for (lli i = 2; i <= n; i += 2)
		s += power(x, i);
	cout << s << endl;
	return 0;
}