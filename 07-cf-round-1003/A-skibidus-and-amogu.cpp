#include <iostream>
#include <string>
using namespace std;

int main()
{
	int t = 0;
	cin >> t;
	while (t--)
	{
		string s, u;
		cin >> s;
		cout << s.substr(0, s.length() - 2) + 'i' << endl;
	}
	return 0;
}