#include <iostream>
typedef long long int lli;
using namespace std;

int main()
{
	lli t;
	cin >> t;
	while (t--)
	{
		string s, ss;
		cin >> s;
		if (s == "abc")
			cout << "YES" << endl;
		else
		{
			ss = s;
			swap(ss[0], ss[1]);

			if (ss == "abc")
				cout << "YES" << endl;
			else
			{
				ss = s;
				swap(ss[1], ss[2]);

				if (ss == "abc")
					cout << "YES" << endl;
				else
				{
					ss = s;
					swap(ss[0], ss[2]);

					if (ss == "abc")
						cout << "YES" << endl;
					else
						cout << "NO" << endl;
				}
			}
		}
	}
	return 0;
}