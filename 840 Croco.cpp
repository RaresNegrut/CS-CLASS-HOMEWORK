/*CERINTA
 * Se da o matrice cu n linii si m coloane si elemente 0 sau 1, care reprezinta harta unui lac, in care 1 inseamna uscat,
 * iar 0 inseamna apa.
 * Sa se plaseze pe fiecare zona cu uscat un crocodil sau un elefant astfel incat sa nu fie doua animale din aceeasi specie
 * in zone invecinate.
 * 
 * DATE DE INTRARE
 * Fisierul de intrare croco.in contine pe prima linie numerele n m. Urmatoarele n linii contin cate m elemente, 0 sau 1,
 * cu semnificatia din enunt.
 * 
 * DATE DE IESIRE
 * Fisierul de iesire croco.out va contine n linii, fiecare cu cate m caractere din multimea {A,C,E}, separate prin cate un spatiu, dupa cum
 * in zona corespunzatoare a lacului este apa, crocodil sau elefant.
 * 
 * RESTRICTII SI PRECIZARI
 * -1<=n,m<=100
 * -se accepta orice solutie corecta
 * 
 * EXEMPLU
 * 
 * croco.in
 * 3 5
 * 1 1 1 0 1
 * 1 1 0 1 1
 * 0 1 1 0 1
 * 
 * croco.out
 * C E C A C
 * E C A C E
 * A E C A C
 */
#include<fstream>
using namespace std;
ifstream fin("croco.in");
ofstream fout("croco.out");
struct lacul
{
	char petic;
}arie[20][20];
int n, i, j, m;
char anim = 'C';
void fill(int i,int j,int n,int m,char anim)
{
	//details to be worked out, get the main function rolling
	//got an idea; put anim as parameter of function so that
	//you can make it alternate every time a patch of land is found
	arie[i][j].petic = anim;
	if (i > 1 && arie[i - 1][j].petic == '1')//NORD
	{
		if (arie[i][j].petic == 'C' || arie[i - 2][j].petic == 'C'
			|| arie[i - 1][j - 1].petic == 'C' || arie[i - 1][j + 1].petic == 'C')
			anim = 'E';
		else if (arie[i][j].petic == 'E' || arie[i - 2][j].petic == 'E'
			|| arie[i - 1][j - 1].petic == 'E' || arie[i - 1][j + 1].petic == 'E')
			anim = 'C';
		arie[i - 1][j].petic = anim;
		fill(i - 1, j, n, m, anim);
	}
	if (i < n && arie[i + 1][j].petic == '1')//SUD
	{
		if (arie[i][j].petic == 'C' || arie[i + 2][j].petic == 'C'
			|| arie[i + 1][j - 1].petic == 'C' || arie[i + 1][j + 1].petic == 'C')
			anim = 'E';
		else if (arie[i][j].petic == 'E' || arie[i + 2][j].petic == 'E'
			|| arie[i + 1][j - 1].petic == 'E' || arie[i + 1][j + 1].petic == 'E')
			anim = 'C';
		arie[i + 1][j].petic = anim;
		fill(i + 1, j, n, m, anim);
	}
	if (j > 1 && arie[i][j - 1].petic == '1')//VEST
	{
		if (arie[i][j-2].petic == 'C' || arie[i][j].petic == 'C'
			|| arie[i + 1][j - 1].petic == 'C' || arie[i - 1][j - 1].petic == 'C')
			anim = 'E';
		else if (arie[i][j-2].petic == 'E' || arie[i][j].petic == 'E'
			|| arie[i + 1][j - 1].petic == 'E' || arie[i - 1][j - 1].petic == 'E')
			anim = 'C';
		arie[i][j - 1].petic = anim;
		fill(i, j - 1, n, m, anim);
	}
	if (j < m && arie[i][j + 1].petic == '1')//EST
	{
		if (arie[i][j].petic == 'C' || arie[i][j+2].petic == 'C'
			|| arie[i + 1][j + 1].petic == 'C' || arie[i - 1][j + 1].petic == 'C')
			anim = 'E';
		else if (arie[i][j].petic == 'E' || arie[i][j+2].petic == 'E'
			|| arie[i + 1][j + 1].petic == 'E' || arie[i - 1][j + 1].petic == 'E')
			anim = 'C';
		arie[i][j + 1].petic = anim;
		fill(i, j + 1, n, m, anim);
	}

}
int main()
{
	fin >> n >> m;
	for (i = 1; i <= n; i++)
		for (j = 1; j <= m; j++)
			fin >> arie[i][j].petic;
	for (i = 1; i <= n; i++)
		for (j = 1; j <= m; j++)
			if (arie[i][j].petic == '1')
			{
				fill(i, j, n, m, anim);
			}
			else if(arie[i][j].petic=='0')
				arie[i][j].petic = 'A';
	for(i=1;i<=n;i++)
	{
		for (j = 1; j <= m; j++)
			fout << arie[i][j].petic << ' ';
		fout << '\n';
	}
	return 0;
}