#include <iostream>
#include <string>
using namespace std;

int main()
{
	int friends, fenceHeight;
	cin >> friends >> fenceHeight;
	int* persons = new int[friends];
	int minWidth = 0;
	for (int i = 0; i < friends; i++)
	{
		cin >> persons[i];
		if (persons[i] > fenceHeight)
			minWidth += 2;
		else
			minWidth++;
	}
	cout << minWidth << endl;
	getchar();
	getchar();
	return 0;
}
