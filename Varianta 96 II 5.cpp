#include <iostream>
#include<cstring>
#pragma warning(disable:4996)

using namespace std;
int main()
{
	char s[20], *p, s1[20] = {}, s2[20] = {}, n = 0;
	cin.getline(s, sizeof(s));
	p = strtok(s, " ");
	strcpy(s1, p);
	//s1 imi retine popescu
	for (; p; p = strtok(NULL, " "))
	{
		if (p != NULL)
			strcpy(s2, p);
	}
	n = strlen(s2);
	for (int i = 0; i < n; i++)
	{
		if (strchr("AEIOUaeiou", s2[i]))
		{
			for (int j = i; j < n; j++)
				s2[j] = s2[j + 1];
			n--;
		}
	}
	strcat(s2, " ");
	strcat(s2, s1);
	cout << s2;
}