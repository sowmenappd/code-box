#include<iostream>

using namespace std;

int main()
{
	int x, save;
	cin >> x;
	save = x;
	bool lucky = false;
	if((x % 4) == 0 || (x % 7) == 0 
		|| (x % 744) == 0 || (x % 477) == 0
		|| (x % 47)	== 0 || (x % 74) == 0
		|| (x % 747) == 0 || (x % 474) == 0
		|| (x % 447) == 0 || (x % 774) == 0)
		lucky = true;
	if(lucky)
	 cout <<"YES" << endl;
	else 
		cout << "NO" << endl;
	return 0;
}
