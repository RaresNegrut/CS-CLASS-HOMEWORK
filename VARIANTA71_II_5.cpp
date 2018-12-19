#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char s[256],c[21];
	int i,j,ok,okk=0;
	cin.get(s,251);
	cin.get();
	cin.get(c,21);
	for(i=0;i<strlen(s);i++)
		if(s[i]==c[0] && strlen(c)-1<=strlen(s)-1-i)
		{
			ok=1;
			for(j=i;j<=strlen(c)-1+i&&ok;j++)
				if(s[j]!=c[j-i])
					ok=0;
			if(ok)
			{
				for(j=i;j<=strlen(c)-1+i&&ok;j++)
					s[j]='*';
				okk=1;
			}
		}
	if(okk)
		cout<<s;
	else
		cout<<"NU APARE";
	return 0;
}
