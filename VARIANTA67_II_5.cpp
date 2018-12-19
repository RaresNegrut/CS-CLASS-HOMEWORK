#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char s[51];
	int i,j;
	cin>>s;
	for(i=strlen(s);i>=0;i--)
		cout<<s+i<<"\n";
	return 0;
}
