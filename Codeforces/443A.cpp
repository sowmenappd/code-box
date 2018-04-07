#include <iostream>
#include <string>
using namespace std;

int main()
{	
	int count[26] = { 0 };
	int ans = 0;
	char characters[27] = { 'a', 'b', 'c', 'd', 'e',
							'f', 'g', 'h', 'i', 'j',
							'k', 'l', 'm', 'n', 'o',
							'p', 'q', 'r', 's', 't',
							'u', 'v', 'w', 'x', 'y', 
							'z', '\0'
													};
	char str[1001];
	cin.getline(str, 1001);
	int l;
	for (int i = 0; str[i] != '\0'; i++)
		l = i;

	for (int i = 0; i <= l; i++)
	{
		for (int j = 0; characters[j] != '\0'; j++)
		{
			if ((str[i] == characters[j]) && count[j] == 0)
			{
				count[j]++;
				ans++;
			}

		}
	}
	cout << ans << endl;
	return 0;
}
