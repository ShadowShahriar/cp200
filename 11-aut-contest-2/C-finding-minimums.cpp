#include <iostream>
using namespace std;

int main()
{
	int n, k, c = 0, mini = 1000000000;
	cin >> n >> k;
	for (int i = 1; i <= n; i++)
	{
		int a;
		cin >> a;
		mini = min(mini, a);
		c++;
		if (c == k || i == n)
		{
			cout << mini << endl;
			mini = 1000000000;
			c = 0;
		}
	}
	return 0;
}