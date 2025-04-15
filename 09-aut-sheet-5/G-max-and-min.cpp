#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int n = 0;
	cin >> n;
	int a[n] = {0};
	for (int i = 0; i < n; i++)
		cin >> a[i];
	sort(a, a + n);
	cout << a[0] << " " << a[n - 1] << endl;
	return 0;
}