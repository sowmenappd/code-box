#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	string str;
	cin >> str;
	sort(str.begin(), str.end());
	int len = str.length();
	int count = 0;
	for (int i = 0; i<len; i++)
	{
		if (str[i] != str[i + 1])
		{
			count++;
		}
	}
	if (count % 2 == 0)
	{
		cout << "CHAT WITH HER!\n";
	}
	else
	{
		cout << "IGNORE HIM!\n";
	}
	getchar();
	getchar();
	return 0;
}
→Judgement Protocol
