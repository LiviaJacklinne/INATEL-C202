#include <iostream>
#include <cmath>
#include <iomanip>
#include <locale>
#include <cstring>
using namespace std;

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	float mat[6][3], maior, menor;
	int l,c, lmaior,cmaior,lmenor,cmenor;
	
	for(l=0; l<6; l++)
	{
		for(c=0; c<3; c++)
		{
			cout<<"Digite o valor da linha "<<l<<" colouna "<<c<<": ";
			cin>> mat[l][c];
		}
		cout<<endl;
	}
	maior = mat[0][0]; lmaior = 0; cmaior = 0; //poderia ser qualquer
	menor = mat[0][0];lmenor = 0; cmenor = 0; // posição do vetor
	
	for(l=0; l<6; l++)
	{
		for(c=0; c<3; c++)
		{
			if (mat[l][c] > maior)
			{
				maior = mat[l][c];
				lmaior = l;
				cmaior = c;
			}
			if (mat[l][c] < menor)
			{
				menor = mat[l][c];
				lmenor = l;
				cmenor = c;
			}
		}
	}
	cout<<"Maior valor: "<<maior<<" (Linha "<<lmaior<<" coluna "<<cmaior<<")"<<endl;
	cout<<"Menor valor: "<<menor<<" (Linha "<<lmenor<<" coluna "<<cmenor<<")"<<endl;
	
	return 0;
}

