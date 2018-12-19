#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char s[101];
	int i;
	cin.get(s,101);
	for(i=0;i<strlen(s);i++)
	{
		if(strchr("aeiou",s[i]))
			s[i]++;
		cout<<s[i];
	}
	return 0;
}
