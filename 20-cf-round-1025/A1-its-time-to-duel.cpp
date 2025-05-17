#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;

		int all1s = 1;
		vector<int> v(n);
		for (auto &x : v)
		{
			cin >> x;
			if (x == 0)
				all1s = 0;
		}

		int flag = all1s;
		for (int i = 1; i < n; i++)
		{
			if (v[i] == v[i - 1] && v[i] == 0)
			{
				flag = 1;
				break;
			}
		}

		cout << (flag == 1 ? "YES" : "NO") << endl;
	}
	return 0;
}