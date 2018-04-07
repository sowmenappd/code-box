#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	string str1;
	cin >> str1;
	int k, l = str1.size();
	int allCapital = 0;
	if(l == 1)
	{
		if(islower(str1[0]))
			str1[0] = toupper(str1[0]);
		else
			str1[0] = tolower(str1[0]);
	goto print;
	}
	if(islower(str1[0]))
	{
		k = 1;
		while(k < l)
		{
			if(isupper(str1[k++]))
				allCapital = 1;
			else {
				allCapital = 0;
				goto print;
				}
		}

		if(allCapital)
		{
			str1[0] = toupper(str1[0]);
			for(int i=1; i<l; i++)
			{
				str1[i] = tolower(str1[i]);
			}
		}
		else 
			goto print;

	}

	if(isupper(str1[0]))
	{
		k = 1;
		while(k < l)
		{
			if(isupper(str1[k++]))
				allCapital = 1;
			else 
			{
				allCapital = 0;
				goto print;
			}
		}

		if(allCapital)
		{
			for(int i=0; i<l; i++)
			{
				str1[i] = tolower(str1[i]);
			}
		}
		else 
			goto print;

	}

	print:
	cout << str1 << endl;
	return 0;
}
