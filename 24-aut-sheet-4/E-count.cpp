#include <iostream>
using namespace std;

int main()
{
	string s;
	cin >> s;

	long long sum = 0;
	for (char c : s)
		sum += c - '0';
	cout << sum << endl;
	return 0;
}