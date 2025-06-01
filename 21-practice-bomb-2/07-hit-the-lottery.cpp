#include <iostream>
using namespace std;

int main()
{
	int n;
	int c = 0;
	cin >> n;

	while (n > 0)
	{
		if (n >= 100)
			c += n / 100, n %= 100;
		else if (n >= 20)
			c += n / 20, n %= 20;
		else if (n >= 10)
			c += n / 10, n %= 10;
		else if (n >= 5)
			c += n / 5, n %= 5;
		else if (n > 0)
			c++, n--;
	}
	cout << c << endl;
	return 0;
}