#include <iostream>
#include <string>
using namespace std;
int main()
{
  int n, turns;
	cin >> n >> turns;
	string str;
	cin >> str;
	for (int i = 0; i < turns; i++)
	{
		for (int k = 0; k < n-1; k++)
		{
			if (str[k] == 'B' && str[k + 1] == 'G')
			{
				char temp = str[k];
				str[k] = str[k + 1];
				str[k + 1] = temp;
				k++;
			}
		}
	}
	cout << str << endl;
	return 0;
}
