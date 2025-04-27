#include <iostream>
using namespace std;
typedef long long int lli;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		lli a, b;
		cin >> a >> b;

		if (a % b == 0)
			cout << 0 << endl;
		else
			cout << b - (a % b) << endl;
	}
	return 0;
}