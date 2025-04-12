#include <iostream>
using namespace std;

int pwr2(unsigned long x)
{
	return (x & (x - 1)) == 0;
}

int main()
{
	int t = 0;
	cin >> t;
	while (t--)
	{
		long long int n = 0, s = 0;
		cin >> n;
		for (long long int i = 1; i <= n; i++)
			s += (pwr2(i) ? -i : i);
		cout << s << endl;
	}
	return 0;
}