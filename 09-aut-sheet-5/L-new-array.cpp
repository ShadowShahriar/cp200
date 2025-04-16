#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n = 0, i = 0;
	cin >> n;

	vector<int> A;
	for (i = 0; i < n; i++)
	{
		int x = 0;
		cin >> x;
		A.push_back(x);
	}

	vector<int> B;
	for (i = 0; i < n; i++)
	{
		int x = 0;
		cin >> x;
		B.push_back(x);
	}

	vector<int> BA;
	BA.reserve(A.size() + B.size());
	BA.insert(BA.end(), B.begin(), B.end());
	BA.insert(BA.end(), A.begin(), A.end());

	for (i = 0; i < BA.size(); i++)
		cout << BA[i] << " ";
	return 0;
}