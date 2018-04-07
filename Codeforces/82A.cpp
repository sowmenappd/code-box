#include <iostream>
#include <string>
using namespace std;

int main()
{	
	int n; 
	cin >> n;
	int round = 1;
	while (round * 5 < n)
	{
		n -= round * 5;
		round *= 2;
	}
	string persons[5] = { "Sheldon", "Leonard", "Penny", "Rajesh", "Howard" };
	cout << persons[(n - 1) / round] << endl;
	return 0;
}
