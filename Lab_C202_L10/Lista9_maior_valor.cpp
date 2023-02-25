#include <iostream>
#include <cmath>
#include <iomanip>
#include <locale>
#include <cstring>
using namespace std;

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	int l, c, linha, coluna,ml,mc;
	int somal=0, somac=0, maiorl=-9999,maiorc=-9999;

	cout << "Digite a quantidade de linhas da matriz: ";
	cin >> linha;
	cout << "Digite a quantidade de colunas da matriz: ";
	cin >> coluna;

	int mat[linha][coluna];

	for(l = 0; l < linha; l++)
	{
		for(c = 0; c < coluna; c++)
		{
			cout << "Digite o valor da linha " << l << " coluna " << c << ": ";
			cin >> mat[l][c];
		}
		cout<<endl;
	}
	cout<<endl;
	
	for(l = 0; l < linha; l++)
	{
		for(c = 0; c < coluna; c++)
		{
			somac = somac + mat[l][c];
			if(maiorc < somac)
			{
				maiorc = somac;
				mc = c;
			}		
		}	
	}
	for(c = 0; c < coluna; c++)
	{
		for(l = 0; l < linha; l++)
		{
			somal = somal + mat[l][c];
				if(maiorl < somal)
			{
				maiorl = somal;
				ml = l;
			}		
		}
	}
	cout<<"Linha da matriz com maiores valores: "<<ml<<endl;
	cout<<"Coluna da matriz com maiores valores: "<<mc<<endl;

	return 0;
}

