#include<iostream>
using namespace std;
int main()
{
	int n,a[10][10]={},p,i,j;
	cin>>n;
	for(i=1;i<=n;i++)
		for(j=1;j<=n;j++)
		{
			cin>>a[i][j];
			if(a[i][j]==0)
				a[0][j]=-1;
			else
				if(a[i][j]>a[0][j] && a[0][j]!=-1)
					a[0][j]=a[i][j];
		}
	for(j=1;j<=n;j++)
	{
		p=1;
		for(i=1;i<=n;i++)
			p*=a[i][j];
		if(a[0][j]*a[0][j]==p)
			cout<<a[0][j]<<" ";
	}
	return 0;
}
