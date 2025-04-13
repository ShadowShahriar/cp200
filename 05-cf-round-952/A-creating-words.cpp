#include <iostream>
using namespace std;

int main()
{
	int t = 0;
	cin >> t;
	while (t--)
	{
		string a, b, c;
		cin >> a >> b;
		c = b;
		b[0] = a[0];
		a[0] = c[0];
		cout << a << " " << b << endl;
	}
	return 0;
}