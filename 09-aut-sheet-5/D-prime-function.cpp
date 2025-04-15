#include <iostream>
using namespace std;
typedef long long int lli;

lli isPrime(lli num)
{
	if (num < 2)
		return 0;
	if (num == 2 || num == 3)
		return 1;
	for (lli i = 2; i * i <= num; i++)
		if (num % i == 0)
			return 0;
	return 1;
}

int main()
{
	int t = 0;
	cin >> t;
	while (t--)
	{
		lli x = 0;
		cin >> x;
		cout << (isPrime(x) ? "YES" : "NO") << endl;
	}
	return 0;
}