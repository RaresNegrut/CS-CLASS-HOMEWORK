#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char s[31];
	int i,j,n,ok,nr=0;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cin.get();
		cin.get(s,31);
		ok=1;
		for(j=0;j<strlen(s)&&ok;j++)
			if(strchr("aeiou",s[j])==0)
				ok=0;
		if(ok)
			nr++;
	}
	cout<<nr;
	return 0;
}
