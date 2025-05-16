#include <iostream>
#include <set>
typedef long long int lli;
using namespace std;

int main()
{
	lli t;
	cin >> t;
	while (t--)
	{
		set<lli> s;
		lli n;
		cin >> n;
		for (lli i = 0; i < n; i++)
		{
			lli x;
			cin >> x;
			s.insert(x);
		}
		cout << s.size() << endl;
	}
	return 0;
}