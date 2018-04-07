#include <iostream>
using namespace std;

int main()
{
	int cost, initDollar, nBananas, money = 0, ans;
	cin >> cost >> initDollar >> nBananas;
	for (int i = 1; i <= nBananas; i++)
	{
		money += i * cost;
	}
	if (money <= initDollar) ans = 0;
	else ans = money - initDollar;
	cout << ans;
	return 0;
}
