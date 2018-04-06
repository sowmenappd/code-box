#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;

int main()
{
	char a[1000], b[1000];
	int i;
	cin >> a >> b;
	int l = strlen(a);
	for (i = 0; i < l && a[i] != '\0'; i++)
	{
		if ((a[i] == '0' && b[i] == '0') || (a[i] == '1' && b[i] == '1'))
		{
			cout << '0';
		}
		else cout << '1';
	}
	cout << endl;
	return 0;
}
