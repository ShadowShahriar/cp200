#include <iostream>
using namespace std;

int main()
{
	string t = "hello";
	string s;
	cin >> s;
	int i = 0, j = 0;

	while (1)
	{
		if (i > s.length() - 1 || j > t.length() - 1)
			break;
		if (s[i] == t[j])
			j++;
		i++;
	}
	cout << (j == t.length() ? "YES" : "NO") << endl;
	return 0;
}