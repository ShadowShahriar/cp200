#include <iostream>
#include <set>
typedef long long int lli;
using namespace std;

int main()
{
	lli n;
	cin >> n;

	set<string> s;
	for (int i = 0; i < n; i++)
	{
		string a, b, c;
		cin >> a >> b;
		c = a + " " + b;
		s.insert(c);
	}
	cout << s.size() << endl;
	return 0;
}