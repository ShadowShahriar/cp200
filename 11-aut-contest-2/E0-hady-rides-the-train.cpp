#include <iostream>
using namespace std;

int main()
{
	long long int row, col, seat, width = 4;
	cin >> seat;
	row = seat / width;
	col = seat % width;
	cout << row << " " << col << endl;
	return 0;
}