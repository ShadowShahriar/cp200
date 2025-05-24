#include <iostream>
typedef long long int lli;
using namespace std;

int main()
{
	lli t;
	cin >> t;
	while (t--)
	{
		lli w, h;
		cin >> w >> h;
		cout << (w == h ? "Square" : "Rectangle") << endl;
	}
	return 0;
}