#include<iostream>
using namespace std;
int main()
{
	int M[25][25]={},n,a,b,i,j;
	cin>>n>>a>>b;
	for(i=1;i<a;i++)
		for(j=1;j<=n;j++)
			if(j<b)
				M[i][j]=1;
			else
				if(j>b)
					M[i][j]=2;
	for(i=a+1;i<=n;i++)
		for(j=1;j<=n;j++)
			if(j<b)
				M[i][j]=3;
			else
				if(j>b)
					M[i][j]=4;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
			cout<<M[i][j]<<" ";
		cout<<"\n";
	}
	return 0;
}
