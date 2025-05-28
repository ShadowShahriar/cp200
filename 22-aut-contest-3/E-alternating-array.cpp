#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n;
	cin >> n;

	int lastSign = 2;
	int alternating = 1;
	vector<int> v1;
	vector<int> v2;
	for (int i = 0; i < n; i++)
	{
		int x;
		cin >> x;
		v1.push_back(x);
		v2.push_back(x);

		if (lastSign == 0 && x > 0)
			alternating = 0;

		if (x > 0)
			lastSign = 0;
		else
			lastSign = -1;
	}

	if (alternating)
		cout << 0 << endl;
	else
	{
		int y = 0;
		int z = 1;
		v2[0] *= -1;

		for (int i = 0; i < n - 1; i++)
		{
			if (v1[i] > 0 && v1[i + 1] > 0 || v1[i] < 0 && v1[i + 1] < 0)
			{
				v1[i + 1] = v1[i + 1] * -1;
				y++;
			}
			if (v2[i] > 0 && v2[i + 1] > 0 || v2[i] < 0 && v2[i + 1] < 0)
			{
				v2[i + 1] = v2[i + 1] * -1;
				z++;
			}
		}
		cout << (z < y ? z : y) << endl;
	}

	return 0;
}