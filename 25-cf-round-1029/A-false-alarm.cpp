#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int d, x;
		cin >> d >> x;
		vector<int> v(d);
		for (int i = 0; i < d; i++)
			cin >> v[i];

		int n = 0;
		for (int i = 0; i < d; i++)
		{
			if (v[i] == 0)
			{
				n++;
			}
			else
			{
				i += max(x - 1, 0);
				n += max(x, 0);
				x = 0;
			}
		}
		cout << (n >= d ? "YES" : "NO") << endl;
	}
	return 0;
}