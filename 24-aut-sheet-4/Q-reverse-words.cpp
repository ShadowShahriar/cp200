#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int space = 0;
	string word;
	while (cin >> word)
	{
		reverse(word.begin(), word.end());
		if (space)
			cout << " ";
		space = 1;
		cout << word;
	}
	cout << endl;
	return 0;
}