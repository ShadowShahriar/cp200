#include <iostream>
using namespace std;

int main()
{
	int n, score;
	string s;
	cin >> n >> s;

	for (int i = 0; i < s.size(); i++)
	{
		char c = s[i];
		if (c == 'V')
			score += 5;
		else if (c == 'W')
			score += 2;
		else if (c == 'Z')
		{
			int x = s.size();
			if (i != x - 1)
			{
				if (s[i + 1] == 'W')
				{
					score /= 2;
					s[i + 1] = '0';
				}
				else if (s[i + 1] == 'V')
				{
					score /= 5;
					s[i + 1] = '0';
				}
			}
		}
		else if (c == 'Y')
		{
			int x = s.size();
			if (i != x - 1)
			{
				s.push_back(s[i + 1]);
				s[i + 1] = '0';
			}
		}
		else if (c == 'X')
		{
			int x = s.size();
			if (i != x - 1)
				s[i + 1] = '0';
		}
	}

	cout << score << endl;
	return 0;
}