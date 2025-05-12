#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	string s;
	cin >> s;
	vector<char> v;
	for (char c : s)
		if (c != '+')
			v.push_back(c);
	sort(v.begin(), v.end());

	s = "";
	long long int n = v.size();
	for (int i = 0; i < n; i++)
	{
		s += v[i];
		if (i != n - 1)
			s += '+';
	}
	cout << s << endl;
	return 0;
}