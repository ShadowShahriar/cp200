#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#define max 10
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		string s;
		cin >> s;
		// cout << s << endl;

		vector<int> v(max, 0);
		for (int i = 0; i < max; i++)
			v[s[i] - '0']++;

		string s2 = "";
		for (int i = 0; i < max; i++)
			for (int j = (max - 1 - i); j < max; j++)
				if (v[j] > 0)
				{
					s2 += (char)(j + '0');
					v[j]--;
					break;
				}
		cout << s2 << endl;
	}
	return 0;
}