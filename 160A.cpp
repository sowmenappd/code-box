#include <iostream>
#include <algorithm>
using namespace std;

int main ()
{
	int i, n, sum=0, counter=0;
	int a[100];
	cin >> n;
	for(i=0; i < n; i++)
	{
		cin >> a[i];
		sum += a[i];
	}

	sort(a, a+i, greater<int>());

	if(n == 2 && a[0]==a[1])
	{
		counter = 2;
	}
	else 
	{
		int halfSum;
		int i=0, coins=0;

		if(sum % 2 == 0)
		{
				halfSum = sum / 2;	
				while(1)
				{
				if(coins > halfSum) break;
				coins += a[i++];
				counter++;
				}
		}
		else 
		{
		halfSum = (sum / 2) + 1;
		while(1)
				{
				if(coins >= halfSum) break;
				coins += a[i++];
				counter++;
				}
		}
	} 
	cout << counter << endl;
	return 0;
}
