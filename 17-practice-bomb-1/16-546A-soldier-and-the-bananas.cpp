#include <iostream>
typedef long long int lli;
using namespace std;

int main()
{
	lli w, x, y, z;
	cin >> x >> y >> z;
	w = ((z * (z + 1)) / 2) * x - y;
	cout << (w >= 0 ? w : 0) << endl;
	return 0;
}