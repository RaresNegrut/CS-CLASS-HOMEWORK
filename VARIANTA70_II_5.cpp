#include<iostream>
using namespace std;
int main()
{
	int a[25][25],n,m,x,i,j;
	cin>>m>>n>>x;
	for(i=1;i<=m;i++)
		for(j=1;j<=n;j++)
			cin>>a[i][j];
	for(i=1;i<=m;i++)
		if(i!=x)
		{
			for(j=1;j<=n;j++)
				cout<<a[i][j]<<" ";
			cout<<"\n";
		}
	return 0;
}
