#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main()
{
	vector<string> arr;
	map<string, int> count;
	int n;
	cin >> n;

	int i = 0;
	for (i = 0; i < n; i++)
	{
		string x;
		cin >> x;
		arr.push_back(x);
	}

	for (i = 0; i < n; i++)
	{
		count[arr[i]]++;
		cout << (count[arr[i]] > 1 ? "YES" : "NO") << endl;
	}
	return 0;
}