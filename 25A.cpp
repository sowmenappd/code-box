#include<iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int a[101];
	int evenCount = 0;
	int oddCount = 0;
	int index;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		if (a[i] % 2 != 0)
			oddCount++;
		else evenCount++;
	}
	for (int i = 0; i < n; i++)
	{
		if (evenCount == 1)
		{
			index = (a[i] % 2 == 0) ? i + 1 : -1;
			if (index != -1)
				break;
		}
		else if(oddCount == 1)
		{
			index = (a[i] % 2 == 1) ? i + 1 : -1;
			if(index != -1)
				break;
		}
	}
	cout << index << endl;
	return 0;
}
