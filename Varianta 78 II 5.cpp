
// Varianta 78 II 5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <cstring>
#include <iostream>
#pragma warning (disable:4996)

using namespace std;
int main()
{
	char s[101], cuv[16], x[201] = {}, copie[16] = {};
	bool yes = false;
	cin.getline(s, sizeof(s));
	cin >> cuv;
	char *p = strtok(s, " ?");
		while (p)
		{
			strcpy(copie, p);
			if (strcmp(copie, cuv) == 0)
			{
				strcat(copie, "?");
				yes = true;
			}
			strcat(x, copie);
			strcat(x, " ");
			p = strtok(NULL, " ");
	}
		if (yes == true)
			cout << x;
		else
			cout << "NU APARE";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
