#include<iostream>
using namespace std;
int main(){
	int num;
	int a, b, c, d;
	cin >> num;
	num++;
	while(num <= 9999)
	{
	a = num / 1000;
	b = num / 100;
	b = b % 10;
	c = num / 10;
	c = c % 10;
	d = num % 10;

	if(a != b && b != c && c != d &&
			d != a && d != b && a != c){
		cout << num << endl;
		break;
	}
	num++;
	}


	return 0;
}
