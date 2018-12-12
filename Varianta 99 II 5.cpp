#include<iostream>

using namespace std;
int main()
{
	int n, a[25][25] = {}, i, j;
	cin >> n;
	for (i = 1; i <= n; i++)
	{
		a[i][n - i + 1] = a[n - i + 1][i] = i;
		for (j = n; j >= 1; j--)
			a[i][j] = a[j][i] = a[i][n - i + 1];
	}
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n; j++)
			cout << a[i][j] << ' ';
		cout << '\n';
	}
}