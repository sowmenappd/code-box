#include <iostream>
#include <string>
using namespace std;

int main()
{
	int cells, targetPosition;
	cin >> cells >> targetPosition;
	int* portals = new int[cells + 1];
	int currentPosition = 1;
	for (int i = 1; i < cells; i++)
	{
		cin >> portals[i];
	}

	while (currentPosition <= targetPosition)
	{
		if (currentPosition == targetPosition)
		{
			cout << "YES" << endl;
			return 0;
		}
		currentPosition = currentPosition + portals[currentPosition];
	}
	cout << "NO" << endl;
	return 0;
}
