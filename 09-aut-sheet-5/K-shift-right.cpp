#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	int n, x;
	vector<int> v;
	cin >> n >> x;

	for (int i = 0; i < n; ++i)
	{
		int y;
		cin >> y;
		v.push_back(y);
	}

	rotate(v.rbegin(), v.rbegin() + (x % n), v.rend());
	for (auto it = v.begin(); it != v.end(); it++)
		cout << *it << " ";
	cout << endl;

	return 0;
}