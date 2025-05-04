#include <iostream>
using namespace std;
typedef long long int lli;

int main()
{
	lli t;
	cin >> t;
	while (t--)
	{
		lli n;
		cin >> n;
		cout << (n * n) / 4 + 1 << endl;
	}
	return 0;
}