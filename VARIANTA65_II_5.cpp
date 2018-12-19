#include<iostream>
using namespace std;
int main()
{
	int a[25][25],n,m,i,j;
	cin>>n>>m;
	for(i=1;i<=n;i++)
	{
		if(i%2)
			for(j=1;j<=m;j++)
			{
				a[i][j]=j+(i-1)*m;
				cout<<a[i][j]<<" ";
			}
		else
			for(j=1;j<=m;j++)
			{
				a[i][j]=i*m-j+1;
				cout<<a[i][j]<<" ";
			}
		cout<<"\n";
	}
	return 0;
}
