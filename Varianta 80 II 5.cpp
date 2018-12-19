#pragma warning (disable:4996)
#include <iostream>
#include <cstring>

using namespace std;
int main()
{
	char s[21];
	cin >> s;
	int vowpos = -1, conspos = -1, i;
	
	for (i = 0; i < strlen(s); i++)
	{
		if (strrchr("aeiouAEIOU", s[i]))
			vowpos = i;
		
		if (!strchr("aeiouAEIOU",s[i]) && ((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z')) && conspos == -1)
			conspos = i;
	}
	if (vowpos != -1 && conspos != -1)
	{
		char aux = s[conspos];
		s[conspos] = s[vowpos];
		s[vowpos] = aux;
		cout << s;
	}
	else
		cout << "IMPOSIBIL";
}



