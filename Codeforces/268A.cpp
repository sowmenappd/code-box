#include<iostream>
using namespace std;

int main()
{
	int teams[31][2];
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < 2; j++)
			cin >> teams[i][j];
	}
	int eventMatches = 0; 
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i != j && teams[i][0] == teams[j][1])
			{
				eventMatches++;
			}
		}
	}
	cout << eventMatches << endl;
	return 0;
}
