#include <iostream>
#include <string>
#include <cmath>
typedef long long int lli;
using namespace std;

int main()
{
	lli t;
	cin >> t;
	while (t--)
	{
		string y;
		cin >> y;

		lli yNum = stoi(y);
		lli s = sqrt(yNum) + 0.5;

		if (s * s != yNum || s > 99)
			cout << -1 << endl;
		else
			cout << 0 << " " << s << endl;
	}
	return 0;
}