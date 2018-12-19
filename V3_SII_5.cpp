#include<iostream>
using namespace std;
int main()
{
	int n,a[25][25]={},i,j;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(i!=j)
				a[i][j]=n-j+1;
			cout<<a[i][j]<<" ";
		}
		cout<<"\n";
	}
	return 0;
}
