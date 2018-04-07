#include <iostream>
#include <string>
using namespace std;

int main()
{
	char first[101], second[101], third[101];
	cin >> first >> second >> third;
	int count1[26] = { 0 } , count2[26] = { 0 }, count3[26] = { 0 };
	int i = 0;
	while (first[i] != '\0')
	{
		count1[first[i] - 65]++;
		i++;
	}
	i = 0;
	while (second[i] != '\0')
	{
		count2[second[i] - 65]++;
		i++;
	}
	i = 0;
	while (third[i] != '\0')
	{
		count3[third[i] - 65]++;
		i++;
	}
	for (int i = 0; i < 26; i++)
	{
		if ( (count1[i] + count2[i]) != count3[i])
		{
			cout << "NO" << endl;
			return 0;
		}
	}
	cout << "YES" << endl;
	return 0;
}
