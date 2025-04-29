#include <iostream>
#include <set>
using namespace std;

int main()
{
	set<int> s;
	int n, p, q;
	cin >> n;

	cin >> p;
	for (int i = 0; i < p; i++)
	{
		int x;
		cin >> x;
		s.insert(x);
	}

	cin >> q;
	for (int i = 0; i < q; i++)
	{
		int x;
		cin >> x;
		s.insert(x);
	}

	cout << (s.size() == n ? "I become the guy." : "Oh, my keyboard!") << endl;
	return 0;
}