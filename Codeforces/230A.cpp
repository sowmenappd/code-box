#include <iostream>
using namespace std;

int main()
{
	int playerStrength, numberOfDragons;
	cin >> playerStrength >> numberOfDragons;
	int dragons[1000][2];
	for (int i = 0; i < numberOfDragons; i++)
	{
		cin >> dragons[i][0] >> dragons[i][1];
	}
	for (int i = 0; i < numberOfDragons; i++)
	{
		for (int j = 0; j < numberOfDragons-1; j++)
		{
			if (dragons[j][0] > dragons[j+1][0])
			{
				int temp1 = dragons[j][0], temp2 = dragons[j][1];
				
				dragons[j][0] = dragons[j+1][0]; 
				dragons[j][1] = dragons[j+1][1];
				
				dragons[j+1][0] = temp1;
				dragons[j+1][1] = temp2;
			}
		}
	}
	int i = 0;
	while (i < numberOfDragons)
	{
		if (playerStrength > dragons[i][0])
		{
			playerStrength += dragons[i][1];
		}
		else
		{
			cout << "NO" << endl;
			return 0;
		}
		i++;
	}
	cout << "YES" << endl;
