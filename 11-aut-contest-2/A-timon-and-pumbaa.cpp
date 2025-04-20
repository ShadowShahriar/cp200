#include <iostream>
using namespace std;

int main()
{
	long long int a, b;
	cin >> a >> b;
	cout << ((a - b >= 0) ? (a - b) : 0) << endl;
	return 0;
}