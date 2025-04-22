#include <iostream>
using namespace std;

int main()
{
	long long int seat, row, col, width = 4;
	cin >> seat;
	row = seat / width;
	if (row % 2 == 0)
		col = seat % width;
	else
		col = 3 - (seat % width);
	cout << row << " " << col << endl;
	return 0;
}