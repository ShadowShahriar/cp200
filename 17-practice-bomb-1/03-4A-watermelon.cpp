#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	cout << ((n > 2 && n % 2 == 0) ? "YES" : "NO") << endl;
	return 0;
}