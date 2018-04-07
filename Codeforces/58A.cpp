#include <iostream>
#include <string>
using namespace std;

int main()
{
	int i=0;
	string word;
	cin >> word;
	while (i < word.length() && word[i] != 'h')
		++i;
	++i;
	while (i < word.length() && word[i] != 'e')
		++i;
	++i;
	while (i < word.length() && word[i] != 'l')
		++i;
	++i;
	while (i < word.length() && word[i] != 'l')
		++i;
	++i;
	while (i < word.length() && word[i] != 'o')
		++i;

	if (i < word.length())
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
	return 0;
}
