#include <iostream>
using namespace std;

int main()
{
	int t = 0;
	cin >> t;
	while (t--)
	{
		string s;
		int n = 0, m = -1, f = 0;
		cin >> n >> s;
		for (int i = 0; i < n; i++)
		{
			int p = int(s[i]);
			if (m <= p)
				m = p;
			else
			{
				f = 1;
				break;
			}
		}
		cout << (f == 0 ? "YES" : "NO") << endl;
	}
	return 0;
}