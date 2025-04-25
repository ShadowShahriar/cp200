#include <iostream>
using namespace std;

int main()
{
	string s;
	int n, p, q;
	cin >> n >> p >> q >> s;

	if (p > n || p + q > n)
	{
		cout << "-1" << endl;
	}
	else
	{
		int c = 1, d = p;
		cout << s.substr(0, p) << endl;
		while (d != n)
		{
			cout << s.substr(d, q) << endl;
			d += q;
		}
	}

	return 0;
}