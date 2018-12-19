#include<iostream>
using namespace std;
int main()
{
	int a[31][31],n,i,j,p=1,ok=0;
	cin>>n;
	for(i=1;i<=n;i++)
		a[0][i]=100;
	for(i=1;i<=n;i++)
		for(j=1;j<=n;j++)
		{
			cin>>a[i][j];
			if(a[i][j]<a[0][j])
				a[0][j]=a[i][j];
		}
	for(i=1;i<=n;i++)
		if(a[i][n-i+1]==a[0][n-i+1])
		{
			ok=1;
			p=(p*a[i][n-i+1])%10;
		}
	if(ok)
		cout<<p;
	else
		cout<<"NU EXISTA";
	return 0;
}
