#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
	long long a[8][8] = {}, n, i, j;
	cin >> n;
	a[1][1] = 0;
	a[1][2] = 1;
	for (i = 1; i <= n; i++)
	{
		if (i % 2 == 1)
		{
			for (j = 2; j <= n; j++)
				a[i][j + 1] = a[i][j] + a[i][j - 1];
			a[i + 1][n] = a[i][n - 1] + a[i][n];
			a[i + 1][n-1] = a[i][n] + a[i + 1][n];
		}
		else
		{
			for(j=n-2;j>=1;j--)
				a[i][j] = a[i][j+1] + a[i][j+2];
			a[i + 1][1] = a[i][1] + a[i][2];
			a[i + 1][2] = a[i][1] + a[i + 1][1];
		}
	}
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n; j++)
			cout<<setw(4) << a[i][j] << ' ';
		cout << '\n';
	}
	return 0;
	//nu merge pentru valori egale cu 6 decat daca matricea are 8*8
}
