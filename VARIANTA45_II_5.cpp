#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char s[41],c;
	int i,j;
	cin>>s;
	for(i=0;i<strlen(s);i++)
	{
		for(j=0;j<strlen(s);j++)
			if(i!=j)
				cout<<s[j];
		cout<<"\n";
	}
	return 0;
}
