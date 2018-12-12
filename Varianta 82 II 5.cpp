#include <iostream>
int citire_si_produs(int &k, int &n, int &m)
{
	std::cin >> k >> n >> m;
	int a[11][11], p = 1, i, j;
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
			p *= j;
	}
	if (p == 1)
		return -1;
	return p;
}
int main()
{
	int n, m, k, prod;
	prod = citire_si_produs(k, n, m);
	if (prod == -1)
		std::cout << "NU EXISTA";
	else
		std::cout << prod;
}
