#include <cstdio>
#include <iostream>

using namespace std;

int main()
{
	int n, sum1 = 0, sum2 = 0 , sum3 = 0;
	cin >> n;
	int force[100][100];
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < 3; ++j)
		{
			cin >> force[i][j];
		}
	}
	for (int i = 0; i < n; ++i)
	{
		sum1 += force[i][0];
		sum2 += force[i][1];
		sum3 += force[i][2];
	}
	if (sum1 == 0 && sum2 == 0 && sum3 == 0)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
	return 0;
}
