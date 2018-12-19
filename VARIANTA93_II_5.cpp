#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char s[201],q[201],x[201];
	int i;
	cin>>s>>q;
	for(i=0;i<strlen(s);i++)
		if(strchr("aeiou",s[i]))
			if(strchr("aeiou",q[i]))
				x[i]='*';
			else
				x[i]='?';
		else
			if(strchr("aeiou",q[i])==0)
				x[i]='#';
			else
				x[i]='?';
	cout<<x;
	return 0;
}
