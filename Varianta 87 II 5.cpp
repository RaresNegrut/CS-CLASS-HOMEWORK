#include<iostream>
using namespace std;
int main()
{
	int a[21][21], n, i, j, s = 0, nr = 0;
	cin >> n;
	for(i=1;i<=n;i++)
	{
		for (j = 1; j <= n; j++)
		{
			cin >> a[i][j];
			if (a[i][j] > 0 && j < i)
				s += a[i][j], nr++;
		}
	}
	if (nr)
		cout << (float)s / nr;
	else
		cout << "NU EXISTA";
	return 0;
}
