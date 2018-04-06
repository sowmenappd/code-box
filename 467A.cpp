#include <cstdio>
#include <iostream>

using namespace std;

int main()
{
	int n, room = 0;
	cin >> n;
	int p, q;
	for (int i = 0; i < n; i++)
	{
		cin >> p >> q;
		if (q - p >= 2)
			++room;
	}
	cout << room;
	return 0;
}
