#include <iostream>
#include <string>
#include <map>
using namespace std;

int main()
{
	string str;
	map<char, int> charCounts;
	cin >> str;

	for (char c : str)
		charCounts[c]++;

	for (const auto &pair : charCounts)
		cout << pair.first << " : " << pair.second << endl;
	return 0;
}