#include<iostream>
using namespace std;
int main()
{
	int n,m,i,j,a[11][11],b[11][11];
	cin>>m>>n;
	for(i=1;i<=m;i++)
		for(j=1;j<=n;j++)
			cin>>a[i][j];
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=m;j++)
		{
			b[i][j]=a[j][n-i+1];
			cout<<b[i][j]<<" ";
		}
		cout<<"\n";
	}
	return 0;
}
