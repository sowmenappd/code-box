#include<iostream>
#include<string>
using namespace std;

int main()
{
	bool flag = true;
	string str;
	cin >> str;
	for (int i = 0; i < str.size(); i++)
	{
		if (str[i] == 'W' & str[i + 1] == 'U' & str[i + 2] == 'B')
		{
			i += 2;
			if (!flag)
				cout << " ";
			continue;
		}
		else
		{
			flag = false;
			cout << str[i];
		}
	}
	return 0;
}
