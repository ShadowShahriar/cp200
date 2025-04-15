#include <iostream>
#include <iomanip>
using namespace std;

void sum(int n)
{
	double s;
	for (int i = 0; i < n; i++)
	{
		double x;
		cin >> x;
		s += x;
	}
	cout << fixed << setprecision(8) << s / n << endl;
}

int main()
{
	int n = 0;
	cin >> n;
	sum(n);
}