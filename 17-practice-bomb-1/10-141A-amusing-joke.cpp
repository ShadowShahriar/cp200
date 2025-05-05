#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	string s1, s2, s3, s4;
	cin >> s1 >> s2 >> s3;
	s4 = s1 + s2;

	sort(s3.begin(), s3.end());
	sort(s4.begin(), s4.end());

	cout << (s3 == s4 ? "YES" : "NO") << endl;
	return 0;
}