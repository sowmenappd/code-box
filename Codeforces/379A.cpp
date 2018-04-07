#include <iostream>
using namespace std;
int main()
{
	int candles, t, div, rem;
	cin >> candles >> t;
	int hours = candles;
	while (candles >= t)
	{
		div = candles / t;
		hours += div;
		rem = candles % t;
		candles = div + rem;
	}
	cout << hours << endl;
	return 0;
}
