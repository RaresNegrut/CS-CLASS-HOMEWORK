#include<iostream>
#include<climits>
using namespace std;
int main()
{
	int a[101][101], n, i, j;
	cin >> n;
	for (i = 0; i <= n + 1; i++)
		for (j = 0; j <= n + 1; j++)
			a[i][j] = INT_MAX;
	for (i = 1; i <= n; i++)
		for (j = 1; j <= n; j++)
			cin >> a[i][j];
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n; j++)
			if (a[i][j] < a[i][j - 1] && a[i][j] < a[i - 1][j] && a[i][j] < a[i + 1][j] && a[i][j] < a[i][j + 1])
				cout << a[i][j] << ' ';
	}
	return 0;
}