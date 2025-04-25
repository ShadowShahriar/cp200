#include <iostream>
using namespace std;
typedef long long ll;

void swap_nums(ll &a, ll &b)
{
	ll c = a;
	a = b;
	b = c;
}

void swap_arr(ll *&a, ll *&b)
{
	ll *c = a;
	a = b;
	b = c;
}

int main()
{
	int n, x, y;
	cin >> n >> x >> y;

	ll **array = new ll *[n];
	for (int i = 0; i < n; i++)
		array[i] = new ll[n];

	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			cin >> array[i][j];

	for (int i = 0; i < n; i++)
		swap_nums(array[i][x - 1], array[i][y - 1]);
	swap_arr(array[x - 1], array[y - 1]);

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (j != 0)
				cout << " ";
			cout << array[i][j];
		}
		cout << endl;
	}
	return 0;
}