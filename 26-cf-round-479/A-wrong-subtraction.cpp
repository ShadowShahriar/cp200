#include <iostream>
typedef long long ll;
using namespace std;

int main()
{
	ll n, k;
	cin >> n >> k;
	while (k--)
	{
		if (n % 10 == 0)
			n /= 10;
		else
			n -= 1;
	}
	cout << n << endl;
	return 0;
}
