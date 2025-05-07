#include <iostream>
#include <string>
typedef long long int lli;
using namespace std;

int isLucky(lli n)
{
	int f = 1;
	string s = to_string(n);
	for (char c : s)
		if (c != '4' && c != '7')
		{
			f = 0;
			break;
		}
	return f;
}

int main()
{
	lli n;
	cin >> n;
	int f = isLucky(n);
	if (f == 0)
	{
		for (lli i = 4; i <= 1000; i++)
		{
			int g = isLucky(i);
			if (g && n % i == 0)
			{
				f = 1;
				break;
			}
		}
	}

	cout << (f ? "YES" : "NO") << endl;
	return 0;
}