#include<iostream>
using namespace std;
int main()
{
	int n,m,j,i,a[11][11];
	cin>>m>>n;
	for(i=1;i<=m;i++)
	{
		a[i][0]=100000;
		for(j=1;j<=n;j++)
		{
			cin>>a[i][j];
			if(a[i][j]<a[i][0])
				a[i][0]=a[i][j];
		}
	}
	a[0][0]=a[1][0];
	for(i=2;i<=m;i++)
		if(a[i][0]>a[0][0])
			a[0][0]=a[i][0];
	cout<<a[0][0];
	return 0;
}
