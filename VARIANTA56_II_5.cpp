#include<iostream>
using namespace std;
int main()
{
	int a[25][25],n,k,i,j;
	cin>>n>>k;
	for(i=1;i<=k;i++)
		for(j=1;j<=n;j++)
			if(j<=k)
				a[i][j]=1;
			else
				a[i][j]=2;
	for(i=k+1;i<=n;i++)
		for(j=1;j<=n;j++)
			if(j<=k)
				a[i][j]=3;
			else
				a[i][j]=4;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
			cout<<a[i][j]<<" ";
		cout<<"\n";
	}
	return 0;
}
