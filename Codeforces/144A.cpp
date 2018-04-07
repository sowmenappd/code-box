#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int* a = new int[n];
	int _maxIndex = n-1, _minIndex = 0;
	int max=0, min;

	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		if (a[i] > max)
		{
			max = a[i];
			_maxIndex = i;
		}
	}
	min = a[0];
	for (int i = 0; i < n; i++)
	{
		if (a[i] <= min)
		{
			min = a[i];
			_minIndex = i;
		}
	}

	int steps = abs(0 - _maxIndex) + abs((n - 1) - _minIndex);
	if (_minIndex < _maxIndex)
	{
		steps--;
	}
	cout << steps << endl;
	return 0;
}
