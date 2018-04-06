#include<iostream>
#include<string>
#include <ctype.h>
using namespace std;

int main()
{
	char str[101];
	cin >> str;
	int upperCount = 0;
	int lowerCount = 0;

	for (int i = 0; str[i] != '\0'; i++)
	{
		if (isupper(str[i]))
		{
			upperCount++;
		}
		else if (islower(str[i]))
		{
			lowerCount++;

		}
	}

	if (lowerCount < upperCount)
	{
		for (int i = 0; str[i] != '\0'; i++)
		{
			str[i] = toupper(str[i]);
		}
	}
	else if( upperCount <= lowerCount)
	{
		for (int i = 0; str[i] != '\0'; i++)
		{
			str[i] = tolower(str[i]);
		}
	}
	cout << str << endl;
	return 0;
}
