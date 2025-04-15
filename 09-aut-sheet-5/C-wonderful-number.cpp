#include <iostream>
#include <algorithm>
using namespace std;
typedef long long int lli;

string bin(lli n)
{
	string r = "";
	while (n != 0)
	{
		r = (n % 2 == 0 ? "0" : "1") + r;
		n /= 2;
	}
	return r;
}

int main()
{
	lli n = 0;
	cin >> n;
	if (n % 2 != 0)
	{
		string bin1 = bin(n);
		string bin2 = bin1;
		reverse(bin2.begin(), bin2.end());
		cout << (bin1 == bin2 ? "YES" : "NO") << endl;
	}
	else
	{
		cout << "NO" << endl;
	}
	return 0;
}