#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char s[255], lit[]="abcdefghijklmnopqrstuvwxyz",c;
	int i,j,v[26]={},k=0,m;
	cin.get(s,255);
	for(i=0;i<strlen(s);i++)
		if(strchr(lit,s[i]) && v[s[i]-'a']==0)
			v[s[i]-'a']=(++k);
	for(i=0;i<25;i++)
		for(j=i+1;j<=25;j++)
			if(v[i]>v[j])
			{
				m=v[i];
				v[i]=v[j];
				v[j]=m;
				c=lit[i];
				lit[i]=lit[j];
				lit[j]=c;
			}
	for(i=k;i<=25;i++)
		cout<<lit[i]<<" ";
	return 0;
}
