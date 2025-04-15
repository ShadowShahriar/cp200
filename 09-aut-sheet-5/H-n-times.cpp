#include <iostream>
using namespace std;

void print(int n, string c)
{
	while (n--)
		cout << c << " ";
	cout << endl;
}

int main()
{
	int t = 0;
	cin >> t;
	while (t--)
	{
		int n = 0;
		string c = "";
		cin >> n >> c;
		print(n, c);
	}
	return 0;
}