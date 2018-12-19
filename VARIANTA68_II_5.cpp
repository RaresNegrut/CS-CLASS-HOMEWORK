#include<iostream>
using namespace std;
int main()
{
	int a[51][51],m,n,i,j,p=1,ok=0;
	cin>>m>>n;
	for(i=1;i<=n;i++)
		for(j=1;j<=n;j++)
		{
			cin>>a[i][j];
			if(i%2==0 && j%2 && a[i][j]>0)
			{
				ok=1;
				p=(p*a[i][j])%10;
			}
		}
	if(ok)
		cout<<p;
	else
		cout<<"NU EXISTA";
	return 0;
}

	