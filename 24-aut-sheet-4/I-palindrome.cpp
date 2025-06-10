#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	string s, s2;
	cin >> s;
	s2 = s;
	reverse(s.begin(), s.end());
	cout << (s == s2 ? "YES" : "NO") << endl;
	return 0;
}