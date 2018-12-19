#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char s[201],*p,q[40];
	int nr=0;
	cin.get(s,201);
	for(p=strtok(s," ");p!=NULL;p=strtok(NULL," "))
	{
		strcpy(q,p);
		if(strchr("aeiouAEIOU",q[0]) && strchr("aeiouAEIOU",q[strlen(q)-1]))
			nr++;
	}
	if(nr)
		cout<<nr;
	else
		cout<<"NU EXISTA";
	return 0;
}
