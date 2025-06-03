#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;
	getline(cin, s);
	int pos = s.find('\\');
	cout << s.substr(0, pos) << endl;

	return 0;
}