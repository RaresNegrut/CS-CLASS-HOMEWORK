#include<iostream>
using namespace std;
int main()
{
	int a[11][11],n,x,i,j;
	cin>>n>>x;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(i==j)
				a[i][j]=x/100;
			else
				if(j==n-i+1)
					a[i][j]=x%10;
				else
					a[i][j]=x/10%10;
			cout<<a[i][j]<<" ";
		}
		cout<<"\n";
	}
	return 0;
}
