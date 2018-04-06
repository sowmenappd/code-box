#include<iostream>
#include<string>
using namespace std;

int main()
{
	int rows, cols;
	cin >> rows >> cols; 
	int sticks = rows * cols;
	int i;
	for(i = 1; sticks > 0; i++)
	{
		sticks -= rows + cols - 1;
		--rows; --cols;
	}

	if (i % 2 == 0)
	{
		cout << "Akshat" << endl;
	}
	
	else
	{
		cout << "Malvika" << endl;
	}

	return 0;
}
