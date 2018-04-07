#include<iostream>
using namespace std;

int main()
{
	int theAnswer;
	int a, b, c;
	cin >> a >> b >> c;
	theAnswer = a * b * c;

	if ( ( a + (b * c) ) >= theAnswer)
	{
		theAnswer = (a + (b * c));
	}

	if ( ( (a + b) * c ) >= theAnswer )
	{
		theAnswer = ((a + b) * c);
	}

	if ((a + b + c) >= theAnswer)
	{
		theAnswer = (a + b + c);
	}

	if ( (a * ( b + c )) >= theAnswer )
	{
		theAnswer = (a * (b + c));
	}

	cout << theAnswer << endl;
	return 0;
}
