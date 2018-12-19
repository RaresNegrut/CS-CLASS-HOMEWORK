#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char s[21];
	int i;
	cin>>s;
	for(i=0;i<strlen(s);i++)
		if(strchr("aeiou",s[i])==0)
			strcpy(s+i,s+i+1);
	cout<<s;
	return 0;
}
