#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char c1,c2,s[251];
	int i;
	cin>>c1>>c2;
	cin.get();
	cin.get(s,251);
	cout<<s<<"\n";
	for(i=0;i<strlen(s);i++)
	{
		if(s[i]==c1)
			s[i]=c2;
		else
			if(s[i]==c2)
				s[i]=c1;
		cout<<s[i];
	}
	return 0;
}
