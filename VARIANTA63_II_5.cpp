#include<iostream>
using namespace std;
int main()
{
	int n,m,i,j,a[25][25];
	cin>>n>>m;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=m;j++)
		{
			if(j==1)
				a[i][j]=i;
			else
				a[i][j]=a[i][j-1]+n;
			cout<<a[i][j]<<" ";
		}
		cout<<"\n";
	}
	return 0;
}
