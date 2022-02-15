#include <iostream>
#include <cmath>
#include <iomanip>
#include <locale>
#include <cstring>
using namespace std;

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	string nome;
	int i=0,d1=0,d2=0,d3=0;//variavel de controle, d = acumulativa das diarias
	float diaria,total1=0,total2=0,total3=0;//variavel acumulativa 
	float diaria1,diaria2,diaria3;//variavel para calcular o total a pagar da diaria
	
	while(i<3)
	{
		cout<<"Informe seu nome: ";
		getline(cin,nome);
		do
		{
			cout<<"Informe quantos dias voce deseja ficar (maior que 0): ";
			cin>>diaria;
		}while (!(diaria>0));
		
		if (diaria<15)
		{
			d1 = d1 + diaria;
			diaria1= 300*diaria+20;
			total1 = total1 + diaria1 ;
			cout<<nome<<" o total a pagar é: "<<diaria1<<" R$"<<endl;
		}
		if (diaria == 15)
		{
			d2 = d2 +diaria;
			diaria2 = 300* diaria+14;
			total2 = total2 + diaria2;
			cout<<nome<<" o total a pagar é: "<<diaria2<<" R$"<<endl;
		}
		if (diaria >15)
		{
			d3 = d3 + diaria;
			diaria3 = 300* diaria+12;
			total3 = total3 + diaria3; 
			cout<<nome<<" o total a pagar é: "<<diaria3<<" R$"<<endl;
		}
		i++;
		cin.ignore();
		cout<<endl;	
	}
	cout<<endl;
	cout<<"O lucro total do hotel é: "<<total1+total2+total3<<" R$"<<endl;
	cout<<"O total de diarias foi: "<<d1+d2+d3<<endl;
	
	return 0;
}

