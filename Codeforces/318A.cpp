#include<iostream>
using namespace std;

int main()
{
	long long int n, k;
	cin >> n >> k;
	long long int num;
	if (k <= (n + 1) / 2)
	{
		num = 2 * k - 1;
	}
	else
	{
		num = 2 * (k - (n+1)/2);
	}
	cout << num << endl;
	return 0;
}
