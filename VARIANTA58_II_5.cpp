#include<iostream>
#include<cstring>
#include<cctype>
using namespace std;
int main()
{
	char s[51];
	int i;
	cin.get(s,51);
	for(i=0;i<strlen(s);i++)
		if(isalpha(s[i])==0)
		{
			strcpy(s+i,s+i+1);
			i--;
		}
	cout<<s;
	return 0;
}
