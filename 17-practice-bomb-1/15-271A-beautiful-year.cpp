#include <iostream>
#include <string>
#include <set>
typedef long long int lli;
using namespace std;

int main()
{
	lli n;
	cin >> n;
	for (lli x = n + 1; x <= 10000; x++)
	{
		string s = to_string(x);
		set<char> unique;
		unique.insert(s[0]);
		unique.insert(s[1]);
		unique.insert(s[2]);
		unique.insert(s[3]);
		if (unique.size() == 4)
		{
			cout << x << endl;
			break;
		}
	}
	return 0;
}