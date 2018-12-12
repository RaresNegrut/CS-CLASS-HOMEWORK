#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
	int a[22][22] = {}, n,i,j,k=1,k1=2;
	cin >> n;
	n *= 2;
	for (i = 1; i <= n; i++)
	{
			if(i%2==1)
			for (j = 1; j <= n; j++)
			{
				a[i][j] = k;
				k += 2;
			}
			else
				for (j = n; j >= 1; j--)
				{
					a[i][j] = k1;
					k1 += 2;
			}

	}
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n; j++)
			cout <<setw(3)<< a[i][j] << ' ';
		cout << '\n';
	}
}