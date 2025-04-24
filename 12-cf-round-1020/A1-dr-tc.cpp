#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		string s;
		cin >> n >> s;
		int countZeros = count(s.begin(), s.end(), '0');
		int countOnes = n - countZeros;
		cout << countOnes * n + countZeros - countOnes << endl;
	}
	return 0;
}