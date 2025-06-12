#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	while (n--)
	{
		string s, t;
		cin >> s >> t;
		int sl = s.length();
		int tl = t.length();
		int m = max(sl, tl);

		for (int i = 0; i < m; i++)
		{
			if (i < sl)
				cout << s[i];
			if (i < tl)
				cout << t[i];
		}
		cout << endl;
	}
	return 0;
}