#include<iostream>
#include<cstring>
#include<cctype>
using namespace std;
int main()
{
	int i,nrmax=0,v[10]={},ok=1;
	char s[51];
	cin.get(s,51);
	for(i=0;i<strlen(s);i++)
		if(isdigit(s[i]))
		{
			v[s[i]-'0']++;
			if(v[s[i]-'0']>nrmax)
				nrmax=v[s[i]-'0'];
		}
	for(i=0;i<10&&ok;i++)
		if(v[i]==nrmax)
		{
			ok=0;
			cout<<i;
		}
	return 0;
}
