#include<iostream>
using namespace std;
int main()
{
	int a[21][21], n, i, j, s = 0, nr = 0, s1 = 0, nr1 = 0;
	float m1, m2;
	cin >> n;
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n; j++)
		{
			cin >> a[i][j];
			if (a[i][j] > 0 && j > i)
				s += a[i][j], nr++;
			if (a[i][j] > 0 && j < i)
				s1 += a[i][j], nr1++;
		}
	}
	m1 =(float) s / nr;
	m2 =(float) s1 / nr1;
	cout << m1 - m2;
}
