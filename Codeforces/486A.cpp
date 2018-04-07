#include<iostream>
using namespace std;

int main()
{
	long long int sum=0;
	long long int n;
	cin >> n;
	if (n % 2 == 0)
	{
		sum = n / 2;
	} 
	else
	{
		sum = (n / 2) - n;
	}
	cout << sum;
	return 0;
}
