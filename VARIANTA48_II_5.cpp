#include<iostream>
using namespace std;
int main()
{
	int n,a[10][10],i,j,k=2;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			a[i][j]=k;
			k+=2;
			cout<<a[i][j]<<" ";
		}
		cout<<"\n";
	}
	return 0;
}
