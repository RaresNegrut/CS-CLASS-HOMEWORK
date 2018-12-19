#include<iostream>
using namespace std;
int main()
{
	int a[51][51],n,i,j,ok=1;
	cin>>n;
	for(i=1;i<=n;i++)
		for(j=1;j<=n;j++)
			cin>>a[i][j];
	for(i=2;i<=n&&ok;i++)
		for(j=1;j<i&&ok;j++)
			if(a[i][j])
				ok=0;
	if(ok)
		cout<<"Este triunghiulara superior";
	else
		cout<<"Nu este triunghiulara superior";
	return 0;
}
