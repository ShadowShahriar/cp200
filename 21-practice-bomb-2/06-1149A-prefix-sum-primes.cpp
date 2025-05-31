#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int n;
	cin >> n;

	int one, two;
	one = two = 0;

	vector<int> v(n);
	for (int i = 0; i < n; i++)
	{
		cin >> v[i];
		if (v[i] == 2)
			two++;
		else
			one++;
	}

	if (two > 0)
	{
		cout << 2 << " ";
		two--;
	}
	if (one > 0)
	{
		cout << 1 << " ";
		one--;
	}

	while (two--)
		cout << 2 << " ";
	while (one--)
		cout << 1 << " ";

	cout << endl;
	return 0;
}