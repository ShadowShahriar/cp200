#include <iostream>
using namespace std;

void shiftZeros(int array[], int n)
{
	int index = 0;
	for (int i = 0; i < n; i++)
		if (array[i] != 0)
			array[index++] = array[i];
	while (index < n)
		array[index++] = 0;
}

int main()
{
	int n;
	cin >> n;
	int *array = new int[n];
	for (int i = 0; i < n; i++)
		cin >> array[i];

	shiftZeros(array, n);

	for (int i = 0; i < n; i++)
		cout << array[i] << " ";
	cout << endl;
	return 0;
}