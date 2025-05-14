#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	long long t;
	cin >> t;
	while (t--)
	{
		string s;
		cin >> s;
		transform(s.begin(), s.end(), s.begin(), ::toupper);
		cout << (s == "YES" ? "YES" : "NO") << endl;
	}
	return 0;
}