#include<iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int friends[100];

	for (int i = 1; i <= n; i++)
	{
		int x;
		cin >> x;
		friends[x] = i;
	}

	for (int j = 1; j <= n; j++)
	{
		cout << friends[j] << " ";
	}

	return 0;
}
