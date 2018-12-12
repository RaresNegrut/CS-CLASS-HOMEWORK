#include<iostream>

using namespace std;
int main()
{
	int n, a[25][25];
	cin>>n;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			a[i][j] = (2 * i*n + 2 * j );
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
			cout << a[i][j] << ' ';
		cout << '\n';
	}
}