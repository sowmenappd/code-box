#include<iostream>
#include<string>
using namespace std;

int main()
{
	string s, t, test;
	int i, j, k;
	cin >> s;
	cin >> t;
	int l = s.size();
	for(i=l-1, k=0; i>=0; i--, k++)
	{
		if(s[i] != t[k])
		{
			cout << "NO" << endl;
			return 0;
		}
	}	
	cout << "YES" << endl;
	return 0;
}
