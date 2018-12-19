#include<iostream>
#include<cstdlib>
#include<cstring>
using namespace std;
int main()
{
	char s[11],*p;
	int n=0;
	cin>>s;
	while(s[strlen(s)-1]=='0')
		s[strlen(s)-1]='\0';
	for(p=strtok(s,".");p!=NULL;p=strtok(NULL,"."))
		n+=atoi(p);
	cout<<n;
	return 0;
}
