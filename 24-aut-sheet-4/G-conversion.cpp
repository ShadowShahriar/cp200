#include <iostream>
using namespace std;

int main()
{
	string s;
	cin >> s;
	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] == ',')
			cout << " ";
		else if (s[i] >= 'a' && s[i] <= 'z')
		{
			int as = s[i] - 32;
			char res = as;
			cout << res;
		}
		else
		{
			int as = s[i] + 32;
			char res = as;
			cout << res;
		}
	}
	return 0;
}