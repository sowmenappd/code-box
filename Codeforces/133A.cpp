#include <iostream>
using namespace std;
int main()
{
	char a[101];
	cin >> a;
	for (int i = 0; a[i] != '\0'; i++)
	{
		if (a[i] == 'H' || a[i] == 'Q' || a[i] == '9')
		{
			cout << "YES" << endl;
			return 0;
		}
	}
	cout << "NO" << endl;
	return 0;
}
