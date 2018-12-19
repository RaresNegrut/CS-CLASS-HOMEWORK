#include<iostream>
using namespace std;
int main()
{
	int a[25][25]={},n,i,j,k=0;
	cin>>n;
	for(i=1;i<=n;i++)
		for(j=1;j<=i;j++)
			a[i-j+1][j]=a[n-j+1][n-i+j]=(++k);
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
			cout<<a[i][j]<<' ';
		cout<<"\n";
	}
	return 0;
}
