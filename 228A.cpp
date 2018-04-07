#include <iostream>
using namespace std;

int main()
{
	int* a = new int[4];
	bool hash[4] = { false };
	for (int i = 0; i < 4; i++)
	{
		cin >> a[i];
	}
	bool flag;
	int j = 0;
	for (int i = 0; i < 4; i++)
	{
		flag = false;
		j = i + 1;
		while (j > i && j < 4)
		{
			if (a[i] == a[j])
			{
				hash[i] = false;
				flag = true;
				break;
			}
			j++;
		}
		if(!flag)
			hash[i] = true;
	}
	int distinct = 0;
	for (int i = 0; i < 4; i++)
	{
		if (hash[i])
			distinct++;
	}
	cout << 4 - distinct << endl;

	return 0;
}
