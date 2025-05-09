#include <iostream>
typedef long long int lli;
using namespace std;

int main()
{
	lli n, c = 0;
	cin >> n;
	while (n--)
	{
		lli w, x, y, z;
		cin >> x >> y >> z;
		w = x + y + z;
		if (w >= 2)
			c++;
	}
	cout << c << endl;
	return 0;
}