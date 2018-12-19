#include <iostream>
int citire_si_suma(int &k, int &n, int &m)
{
	std::cin >> k >> n >> m;
	int a[11][11], s = 0, i, j;
	bool ok;
	for (i = 1; i <= n; i++)
		for (j = 1; j <= m; j++)
			std::cin >> a[i][j];
	for (j = 1; j <= m; j++)
	{
		ok = false;
		for (i = 1; i <= n; i++)
			if (a[i][j] == k)
				ok = true;
		if (ok == true)
			s += j;
	}
	if (s == 0)
		return -1;
	return s;
}
int main()
{
	int n, m,k,sum;
	sum = citire_si_suma(k, n, m);
	if (sum == -1)
		std::cout << "NU EXISTA";
	else
		std::cout << sum;
}
