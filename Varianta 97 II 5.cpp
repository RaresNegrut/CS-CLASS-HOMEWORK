#include<iostream>

using namespace std;
int main()
{
	int n, m, a[25][25];
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= m; j++)
			cin >> a[i][j];
	for (int i = n; i >= 1; i--)
	{
		for (int j = 1; j <= m; j++)
			cout << a[i][j] << ' ';
		cout << '\n';
	}
}