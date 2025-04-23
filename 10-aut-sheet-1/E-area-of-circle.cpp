#include <iostream>
#include <iomanip>
#define PI 3.141592653
using namespace std;

int main()
{
	double radius = 0.0;
	cin >> radius;

	double area = PI * radius * radius;
	cout << fixed << setprecision(9);
	cout << area;
	return 0;
}