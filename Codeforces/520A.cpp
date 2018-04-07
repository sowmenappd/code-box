#include <iostream>
#include <ctype.h>
using namespace std;
bool alphabets[26] = { false };

int main()
{
	int n;
	cin >> n;
	char a[101];
	cin >> a;
	int i = 0;
	
	if (n < 26)
	{
		cout << "NO" << endl;
		return 0;
	}
	else
	{
		while (i < n)
		{
			alphabets[tolower(a[i]) - 97] = true;
			i++;
		}
	
		for (int i = 0; i < 26; i++)
		{
			if (alphabets[i] == false)
			{
				cout << "NO" << endl;
				return 0;
			}
		}
	}
	cout << "YES" << endl;
	return 0;
}
