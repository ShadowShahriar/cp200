#include <iostream>
using namespace std;
typedef long long int lli;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		lli a, b, c, m = 0;
		cin >> a >> b;
		if (a % b == 0)
		{
		}
		else
		{
			while (a % b != 0)
			{
				a++;
				m++;
			}
		}
		cout << m << endl;
	}
	return 0;
}