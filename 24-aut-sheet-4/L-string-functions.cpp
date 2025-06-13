#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int n, q;
	cin >> n >> q;

	string s;
	cin >> s;

	while (q--)
	{
		int l, r;
		string fn;
		cin >> fn;

		if (fn == "pop_back")
		{
			s.pop_back();
		}
		else if (fn == "front")
		{
			cout << s.front() << endl;
		}
		else if (fn == "back")
		{
			cout << s.back() << endl;
		}
		else if (fn == "sort")
		{
			cin >> l >> r;
			sort(s.begin() + min(l, r) - 1, s.begin() + max(l, r));
		}
		else if (fn == "reverse")
		{
			cin >> l >> r;
			reverse(s.begin() + min(l, r) - 1, s.begin() + max(l, r));
		}
		else if (fn == "print")
		{
			int p;
			cin >> p;
			cout << s[p - 1] << endl;
		}
		else if (fn == "substr")
		{
			cin >> l >> r;
			for (int i = min(l, r) - 1; i <= max(l, r) - 1; i++)
				cout << s[i];
			cout << endl;
		}
		else
		{
			char c;
			cin >> c;
			s.push_back(c);
		}
	}
	return 0;
}