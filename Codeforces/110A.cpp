#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
	long long int n, rem, r;
	int nLucky = 0;
	cin >> n;
	rem = n;
	while (n != 0)
	{
		r = n % 10;
		if (r == 4 || r == 7)
			++nLucky;
		n /= 10;
	}
	if (nLucky == 4 || nLucky == 7)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
	return 0;
}
