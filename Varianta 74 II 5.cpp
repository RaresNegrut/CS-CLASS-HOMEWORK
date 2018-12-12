// Varianta 74 II 5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#pragma warning (disable:4996)
#include <iostream>
using namespace std;
void generare(int &n, int a[25][25]) {
	
	cin >> n;
	int i, j;
	a[1][1] = 1;
	a[1][2] = 1;
	for (i = 1; i <= n; i++)
	{
		for (j = 3; j <= n; j++)
		{
				a[i][j] = (a[i][j - 2] + a[i][j - 1]) % 10;
		}
		a[i + 1][1] = (a[i][j - 2] + a[i][j - 1]) % 10;
		a[i + 1][2] = (a[i + 1][1] + a[i][j - 1]) % 10;
	}
}
void afisare(int n, int a[25][25])
{
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
			cout << a[i][j] << ' ';
		cout << '\n';
	}
}
int main()
{
	int a[25][25] = {}, n;
	generare(n, a);
	afisare(n, a);
	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
