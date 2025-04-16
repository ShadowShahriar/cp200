#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int n = 0;
	cin >> n;

	vector<int> v;
	int x = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> x;
		v.push_back(x);
	}

	sort(v.begin(), v.end());
	v.erase(unique(v.begin(), v.end()), v.end());
	cout << v.size() << endl;

	return 0;
}