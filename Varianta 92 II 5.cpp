#include<iostream>
using namespace std;

int a[25][25] = {}, n, m,linie,coloana;
void citire() {
	cin >> m >> n;
	for (int i = 1; i <= m; i++)
		for (int j = 1; j <= n; j++)
			cin >> a[i][j];
}
void linie_coloana() {
	int minim = a[1][1];
	for (int i = 1; i <= m; i++)
	{
		for (int j = 1; j <= n; j++)
			if (a[i][j] < minim)
			{
				minim = a[i][j];
				linie = i;
				coloana = j;
			}
	}
	for (int i = 1; i <= m; i++)
		for (int j = coloana; j < n; j++)
			a[i][j] = a[i][j + 1];
	for (int i = linie; i < m; i++)
		for (int j = 1; j <= n; j++)
			a[i][j] = a[i+1][j];
	m--;
	n--;
}
void afisare() {
	for (int i = 1; i <= m; i++)
	{
		for (int j = 1; j <= n; j++)
			cout << a[i][j] << ' ';
		cout << '\n';
	}
}
int main() {

	citire();
	linie_coloana();
	afisare();
	return 0;
}