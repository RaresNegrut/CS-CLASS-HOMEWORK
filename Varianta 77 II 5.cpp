// Varianta 77 II 5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#pragma warning (disable:4996)
#include <iostream>
#include <cstring>

using namespace std;
int main()
{
	char s[51];
	cin.get(s, sizeof(s));
	int i;
	s[0] -= 32;
	for (i = 1; i < strlen(s); i++)
	{
		if (s[i + 1] == ' ' || s[i - 1] == ' ' || s[i + 1] == '\0')
			s[i] -= 32;
	}
	cout << s;
	return 0;
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
