#include <iostream>
#include <set>
typedef long long int lli;
using namespace std;

int main()
{
	string s;
	cin >> s;
	set<char> unique;
	for (lli i = 0; i < s.length(); i++)
		unique.insert(s[i]);
	if (unique.size() % 2 == 0)
		cout << "CHAT WITH HER!";
	else
		cout << "IGNORE HIM!";
	cout << endl;
	return 0;
}