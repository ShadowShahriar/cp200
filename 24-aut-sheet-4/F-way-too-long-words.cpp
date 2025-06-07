#include <iostream>
using namespace std;

int main()
{
	long long int n = 0;
	cin >> n;
	while (n--)
	{
		string str;
		cin >> str;

		long long int l = str.length();
		if (l > 10)
			cout << str[0] << (l - 2) << str[l - 1];
		else
			cout << str;
		cout << endl;
	}
	return 0;
}