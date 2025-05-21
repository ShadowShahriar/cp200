#include <iostream>
using namespace std;

int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		int n, b, r;
		string s;
		cin >> n >> s;

		int m = s.size();
		for (int i = 0; i < m; i++)
			if (s[i] == 'B')
			{
				b = i;
				break;
			}

		for (int i = 0; i < m; i++)
			if (s[i] == 'B')
				r = i;

		cout << r - b + 1 << '\n';
	}
}