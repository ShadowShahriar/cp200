#include <iostream>
using namespace std;

int main()
{
	int t = 0;
	cin >> t;
	while (t--)
	{
		long long int start, end, sum;
		cin >> start >> end;
		if (start > end)
			swap(end, start);
		sum = (end * (end + 1) / 2) - (start * (start - 1) / 2);
		cout << sum << endl;
	}
	return 0;
}