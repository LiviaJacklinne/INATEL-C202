#include <iostream>
#include <cmath>
#include <iomanip>
#include <locale>
#include <cstring>
using namespace std;

void parcial (char sexo, int idade, int &numh)
{
	if (sexo == 'M' && idade >=18)
		numh ++;
	return;
}

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	char sexox;
	int i, idadex, qp =0;
	
	for (i=1; i<=5; i++)
	{
		do
		{
			cout<<"Digite o sexo (M ou F): ";
			cin>>sexox;
		} while (!(sexox == 'M' || sexox == 'F'));
		
		do
		{
			cout<<"Digite sua idade (idade > 0): ";
			cin>>idadex;
		} while (!(idadex > 0));
		
		parcial (sexox,idadex,qp);
		cout<<endl;
	}
	
	cout<<"Homens maiores de idade: "<<(qp*100)/5.0<<"%"<<endl;

	return 0;
}

