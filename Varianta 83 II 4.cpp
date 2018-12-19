#include<iostream>
using namespace std;
int main()
{
	int a[5][5], p = 1,i,j;
	for (i = 1; i <= 4; i++)
		for (j = 1; j <= 4; j++)
			cin >> a[i][j];
	for (i = 1; i <= 4; i++)
		p *= a[i][4 - i + 1];
	cout << p;
	return 0;
}