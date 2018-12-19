#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	int n,i,minn=256,j,nr;
	char s[256],p[256];
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cin.get();
		cin.get(s,256);
		nr=0;
		for(j=0;j<strlen(s);j++)
			if(strchr("aeiou",s[j]))
				nr++;
		if(nr<=minn)
		{
			minn=nr;
			strcpy(p,s);
		}
	}
	cout<<p;
	return 0;
}
