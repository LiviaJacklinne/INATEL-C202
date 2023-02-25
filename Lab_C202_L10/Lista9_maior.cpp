#include <iostream>
#include <cmath>
#include <iomanip>
#include <locale>
#include <cstring>
using namespace std;

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	int l,c,ml,mc;
	float mat[4][5], menor=999999,soma=0;
	
	for (l=0; l<4; l++)
	{
		for(c=0; c<5; c++)
		{
			cout<<"Digite o valor da linha "<<l<<" clouna "<<c<<": ";
			cin>>mat[l][c];
			if(menor >mat[l][c])
			{
				menor = mat[l][c];
				ml = l;
				mc = c;
			}	
		}
		cout<<endl;
	}
	cout<<endl;
	for(l=ml; l<=ml; l++)
	{
		for(c=0; c<5; c++)
		{
			soma = soma + mat[l][c];
		}
	}
	cout<<"Menor valor: "<<fixed<<setprecision(1)<<menor<<endl;
	cout<<"Linha: "<<ml<<endl;
	cout<<"Coluna: "<<mc<<endl;
	cout<<"Soma da linha: "<<fixed<<setprecision(1)<<soma<<endl;

	return 0;
}

