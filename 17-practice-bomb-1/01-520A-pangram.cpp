#include <iostream>
#include <algorithm>
#include <set>
using namespace std;

int main()
{
	int n;
	string s;
	cin >> n >> s;
	if (n < 26)
	{
		cout << "NO" << endl;
	}
	else
	{
		transform(s.begin(), s.end(), s.begin(), ::toupper);
		set<char> unique;
		for (int i = 0; i < n; i++)
			unique.insert(s[i]);
		cout << ((unique.size() >= 26) ? "YES" : "NO") << endl;
	}
	return 0;
}
