#include<iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int levels[100];
	for (int i = 0; i < 2; i++)
	{
		int p, q;
		cin >> p;
		for (int j = 1; j <= p; j++)
		{
			cin >> q;
			levels[q] =  1;
		}
	}
	for (int i = 1; i <= n; i++)
	{
		if (levels[i] != 1)
		{
			cout << "Oh, my keyboard!" << endl;
			return 0;
		}
	}
	cout << "I become the guy." << endl;
	return 0;
}
