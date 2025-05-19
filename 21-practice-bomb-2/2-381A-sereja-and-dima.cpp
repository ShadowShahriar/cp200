#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<int> v(n);
	for (int i = 0; i < n; i++)
		cin >> v[i];

	int scoreS = 0;
	int scoreD = 0;
	int turn = 1;

	int left = 0;
	int right = n - 1;

	while (left <= right)
	{
		int largest = 0;
		if (v[left] > v[right])
		{
			largest += v[left];
			left++;
		}
		else
		{
			largest += v[right];
			right--;
		}

		if (turn)
			scoreS += largest;
		else
			scoreD += largest;
		turn = !turn;
	}

	cout << scoreS << " " << scoreD;
	return 0;
}