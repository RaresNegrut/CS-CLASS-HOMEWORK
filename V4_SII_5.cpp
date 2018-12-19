#include<iostream>
using namespace std;
int main()
{
	int i,j,a[25][25]={},n;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(i!=j)
				a[i][j]=n-i+1;
			cout<<a[i][j]<<" ";
		}
		cout<<"\n";
	}
	return 0;
}
