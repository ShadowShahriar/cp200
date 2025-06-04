#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s1, s2;
	cin >> s1 >> s2;
	if (s1 > s2)
		cout << s2;
	else
		cout << s1;
	cout << endl;
	return 0;
}