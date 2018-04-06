#include <iostream>
#include <ctype.h>

using namespace std;

int main()
{
	char a[1001];
	cin >> a;
	if (!isupper(a[0]))
	{
		a[0] = toupper(a[0]);
	}
	cout << a;
	return 0;
}
