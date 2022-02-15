#include <iostream>
#include <cmath>
#include <iomanip>
#include <locale>
#include <cstring>
using namespace std;

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	int vet[4], voo, id,i;
	
	for(i=0; i<4 ; i++)
	{
		cout<<"Informe quantos lugares tem no voo "<<i<<": ";
		cin>>vet[i];
	}
	cout<<"Digite o numero da sua identidade (9999 para sair): ";
	cin>>id;
	while (id != 9999)
	{	
		cout<<"Iforme qual voo você deseja (0 a 36): ";
		cin>>voo;
		if(vet[voo] >0)
		{
			cout<<"Seu voo foi confirmado"<<endl<<endl;
			vet[voo] = vet[voo-1];
		}
		else 
			cout<<"Desculpe, mas este voo esta lotado."<<endl<<endl;
		cout<<"Digite o numero da sua identidade (9999 para sair): ";
		cin>>id;
	}
	
	return 0;
}

