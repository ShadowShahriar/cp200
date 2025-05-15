#include <iostream>
typedef long long int lli;
using namespace std;

int main()
{
	lli t;
	cin >> t;
	while (t--)
	{
		lli n;
		string s;
		cin >> n >> s;

		int d = 0;
		for (char c : s)
		{
			if (c == '0')
				d += 1;
			else if (c == '1')
				d -= 1;
		}

		d %= 4;
		if (d < 0)
			d += 4;

		switch (d)
		{
		case 0:
			s = "E";
			break;
		case 1:
			s = "S";
			break;
		case 2:
			s = "W";
			break;
		case 3:
			s = "N";
			break;
		default:
			break;
		}
		cout << s << endl;
	}
	return 0;
}