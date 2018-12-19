#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char s[21],voc[]="aeiou";
	cin>>s;
	for(int i=0;i<strlen(s);i++)
		if(strchr(voc,s[i]))
			cout<<s[i]<<char(s[i]-32);
		else
			cout<<s[i];
	return 0;
}
