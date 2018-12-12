#include <iostream>
#include<cstring>
using namespace std;

int main()
{
	char s[300];
	bool ok = false;
	cin.get(s, 300);
	for (int i = 0; i < strlen(s); i++)
	{
		if (strchr("aeiouAEIOU", s[i]))
		{
			for (int j = strlen(s) + 1; j > i; j--)
				s[j] = s[j - 1];
			s[i + 1] = '*';
			ok = true;
		}
	}
	if (ok)
	{
		cout << s;
	}
	else
		cout << "FARA VOCALE";
	return 0;
}
