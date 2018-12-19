#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char s[51];
	int i,v[26]={},nrmax=0,ok=1;
	cin.get(s,51);
	for(i=0;i<strlen(s);i++)
		if(s[i]>='a' && s[i]<='z')
		{
			v[s[i]-'a']++;
			if(v[s[i]-'a']>nrmax)
				nrmax=v[s[i]-'a'];
		}
	for(i=0;i<=25&&ok;i++)
		if(v[i]==nrmax)
		{
			ok=0;
			cout<<char(i+'a');
		}
	return 0;
}
