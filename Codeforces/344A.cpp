#include<iostream>
using namespace std;

int main()
{
	int magnets[100000];
	int first;
	int n;
	int groups = 1;
	cin >> n;
	for(int i=0; i<n; i++)
		cin >> magnets[i];
	first = magnets[0];
	int adjacent;
	for (int i = 1; i < n; i++)
	{
		if (first != magnets[i])
			groups++;
		first = magnets[i];
	}
	cout << groups << endl;
	return 0;
}
