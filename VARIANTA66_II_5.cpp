#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char s[51];
	int i,j;
	cin>>s;
	for(i=0;i<=strlen(s)-1;i++)
	{
		for(j=0;j<=i;j++)
			cout<<s[j];
		cout<<endl;
	}
	return 0;
}
