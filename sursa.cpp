/*Se considera o clasa cu n elevi, pentru
fiecare se cunosc:numele, clasa, abs, media
Realizati un meniu in care sa rezolvati urmatoarele cerinte:
- Afisati toti elevii cu datele propri
- Cititi din fisier si formati un vector cu elevii
- Afisati elevii cu mai mult de 10  abs
- ordinati elevii descrescator dupa medie
- inserare elev pe o poz data
- stergere elev de pe o poz data
*/
#include<fstream>
#include<iostream>
#include<cstring>
#include<iomanip>
#include<cstdlib>
using namespace std;
ifstream f("in.txt");

struct  elev
{
   char nume[45],cls[3];
   int abs;
   float med;
}v[31];


void citire(int &n, elev v[])
{
 int i;	
 f>>n;
 for(i=1;i<=n;i++)
    f>>v[i].nume>>v[i].cls>>v[i].abs>>v[i].med;
}

void afis(int n, elev v[])
{
 int i;	
 for(i=1;i<=n;i++)
    cout<<setw(15)<<v[i].nume<<setw(5)<<v[i].cls<<" "<<v[i].abs<<" "<<v[i].med<<endl;
 cout<<endl;
}

void afis_10(int n, elev v[])
{
 int i;	
 for(i=1;i<=n;i++)
  if(v[i].abs>10) 
    cout<<setw(15)<<v[i].nume<<" "<<v[i].cls<<" "<<v[i].abs<<" "<<v[i].med<<endl;
 cout<<endl;
}

void sortare(int n, elev v[])
{
 int i,j;
 for(i=1;i<n;i++)
	 for(j=i+1;j<=n;j++)
		 if(v[i].med<v[j].med)
			 swap(v[i],v[j]);
}

void inserare(int &n, elev v[])
{
 elev e;	
 int k,i,j;
 cout<<"Cititi o poz dintr-un vector cu "<<n<<" elem:";
 cin>>k;
 if(k>=1 && k<=n+1)
 {
  cout<<"Nume clasa absente medie:";	 
  cin>>e.nume>>e.cls>>e.abs>>e.med;
  for(i=n+1;i>k;i--)
	  v[i]=v[i-1];
  v[k]=e;
  n++;
 }
 else
	cout<<"Pozitie afara din vector";
}
void stergere(int &n, elev v[])
{
}

int main()
{
  int n,i,j,op;
  char r[2];
  // meniu
  do
  {
	cout<<"1.Citire date din fisier"<<endl; 
    cout<<"2.Afisare date in fisier"<<endl;  	
	cout<<"3.Afisare elevi cu mai mult de 10 abs"<<endl;  
	cout<<"4.Ordonare elevi descrescator dupa medie"<<endl; 
	cout<<"5.Inserare elev"<<endl;  
	cout<<"6.Stergere elev"<<endl; 
    cout<<"Operatia de executat este:";
	cin>>op;
    switch (op)
	{
     case 1: {citire(n,v); afis(n,v);break;}
	 case 2: {afis(n,v);break;}
	 case 3: {afis_10(n,v);break;}
	 case 4: {sortare(n,v);afis(n,v);break;}
     case 5: {inserare(n,v);afis(n,v);break;} 
	 case 6: {stergere(n,v);afis(n,v);break;} 
     default:cout<<"Optiunea nu este in meniu"<<endl;
	}		
    cout<<"Mai doriti sa rulati meniul?Da/Nu ";
    cin>>r;	
	system("cls");
  }while(strcmp(r,"Da")==0); 	  
  return 0;  
}

