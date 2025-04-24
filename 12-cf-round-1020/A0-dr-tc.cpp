#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int t = 0;
	cin >> t;
	while (t--)
	{
		long long n;
		string sdef, scp;
		cin >> n >> sdef;
		scp = sdef;

		long long score = 0;
		for (long long i = 0; i < n; i++)
		{
			scp = sdef;
			if (scp[i] == '0')
				scp[i] = '1';
			else if (scp[i] == '1')
				scp[i] = '0';
			score += count(scp.begin(), scp.end(), '1');
		}
		cout << score << endl;
	}
	return 0;
}