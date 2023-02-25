#include <iostream>
#include <cmath>
#include <iomanip>
#include <locale>
#include <cstring>
using namespace std;

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	int l, c, d, somal, somac, k=0, totl = 0, totc = 0;

	cout << "Digite a dimensão da sua matriz: ";
	cin >> d;

	int mat[d][d];

	for(l = 0; l < d; l++)
	{
		for(c = 0; c < d; c++)
		{
			cout << "Digite o valor da linha " << l << " coluna " << c << ": ";
			cin >> mat[l][c];
		}
		cout << endl;
	}


	for(l = 0; l < 1; l++)
		for(c = 0; c < d; c++)
			totl = totl + mat[l][c];

	for(c = 0; c < 1; c++)
		for(l = 0; l < d; l++)
			totc = totc + mat[l][c];

	for(l = 0; l < d; l++)
	{
		somal=0;
		for(c = 0; c < d; c++)
		{
			somal = somal + mat[l][c];
		}
			if(somal != totl)
				k = 1;			
	}
	
	for(c = 0; c < d; c++)
	{
		somac=0;
		for(l = 0; l < d; l++)
		{
			somac = somac + mat[l][c];
		}
		if(somac != totc)
				k = 1;
			
	}
	if (k != 1)
	{
		cout<<"Quadrado perfeito"<<endl;
	}
	else cout<<"Nao e quadrado perfeito"<<endl;




	return 0;
}

