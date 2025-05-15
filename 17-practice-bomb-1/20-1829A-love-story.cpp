#include <iostream>
using namespace std;

int main()
{
	long long int t;
	cin >> t;
	while (t--)
	{
		string m = "codeforces";
		string s;
		cin >> s;

		int c = 0;
		for (int i = 0; i < m.size(); i++)
			if (m[i] != s[i])
				c++;
		cout << c << endl;
	}
	return 0;
}