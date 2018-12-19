#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char s[21];
	int i;
	cin>>s;
	i=0;
	while(strchr("aeiou",s[i])==0)
		i++;
	strcpy(s+i,s+i+1);
	i=strlen(s)-1;
	while(strchr("aeiou",s[i])==0)
		i--;
	strcpy(s+i,s+i+1);
	cout<<s;
	return 0;
}
