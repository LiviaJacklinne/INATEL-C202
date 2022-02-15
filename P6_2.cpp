#include <iostream>
#include <cmath>
#include <iomanip>
#include <locale>
#include <cstring>
using namespace std;

int parcial (char sexox, int idadex)
{
	int quant;
	if ( sexox == 'M' && idadex >= 18)
		quant = 1;
	else quant = 0;
	return quant;
	/*if (sexox == 'M' && idadex >= 18)
		return 1;
	else return 0;
	*/
}

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	char sexoy;
	int idadey, i, qparcial = 0;

	for(i = 0; i < 5; i++)
	{
		do
		{
			cout<<"Digite o sexo (M ou F): ";
			cin>>sexoy;
		} while (!(sexoy == 'M' || sexoy == 'F'));
		
		do
		{
			cout<<"Digite a idade (maior que 0): ";
			cin>>idadey;
		} while (!(idadey>0));
		qparcial = qparcial + parcial(sexoy,idadey);
	}
	cout<<"Porcentagem de homens com maioridade: "<<(qparcial*100)/5.0<<"%"<<endl;

	return 0;
}

