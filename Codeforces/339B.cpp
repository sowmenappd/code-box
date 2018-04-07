#include <iostream>
using namespace std;

int main()
{
	long int houses, numberOfTasks;
	cin >> houses >> numberOfTasks;
	int currentHousePosition = 1;
	unsigned long long int time = 0;
	int* housesToRound = new int[numberOfTasks];
	for (int i = 0; i < numberOfTasks; i++)
	{
		cin >> housesToRound[i];
	}
	for (int i = 0; i < numberOfTasks; i++)
	{
		int destination = housesToRound[i];
		if (destination < currentHousePosition)
		{
			time = time + (houses + destination) - currentHousePosition;
		}
		else
		{
			time = time + (destination - currentHousePosition);
		}
		currentHousePosition = destination;
	}
	cout << time << endl;
	return 0;
}
