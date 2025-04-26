#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
	int t = 1;
	cin >> t;
	while (t--)
	{
		string s;
		cin >> s;
		// cout << s << endl;

		vector<char> v;
		for (int i = 0; i < 10; i++)
			v.push_back(s[i]);
		// sort(v.rbegin(), v.rend());

		string s2;
		int zeroC = 0;
		for (int i = 0; i < 10; i += 2)
		{
			if (v[i] == '0')
				zeroC++;
			else
				s2 += v[i];
		}
		for (int i = 11; i > 0; i -= 2)
		{
			if (v[i] == '0')
				zeroC++;
			else
				s2 += v[i];
		}
		for (int i = 0; i < zeroC; i++)
			s2 += "0";

		long long int ii1 = stoll(s);
		long long int ii2 = stoll(s2);
		cout << min(ii1, ii2) << endl;
	}
	return 0;
}