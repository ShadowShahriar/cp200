#include <iostream>
typedef long long int lli;
using namespace std;

int main()
{
	lli k, l, m, n, d, x = 0;
	cin >> k >> l >> m >> n >> d;
	for (lli i = 1; i <= d; i++)
		if (i % k == 0 || i % l == 0 || i % m == 0 || i % n == 0)
			x++;
	cout << x << endl;
	return 0;
}