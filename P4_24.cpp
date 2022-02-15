#include <iostream>
#include <cmath>
#include <iomanip>
#include <locale>
#include <cstring>
#include <string.h>
#include <stdio.h>
using namespace std;

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	int idade,mv,candidatos, cmg; //mv = mais velho, cmg = candidatos MG,
	char curso;
	string uf;
	cmg=0; candidatos=0;
	
	cout<<"digite sua idade (0 para sair): ";
	cin>>idade; 
	mv=idade;
	
	while (idade>0)
	{
		cout<<"digite seu UF (letra maiuscula): ";
		cin>>uf;
		cout<<"T = Tecnico, M = Médio, S = Suletivo. ";
		cout<<"Qual seu nivel de formação? ";
		cin>>curso;
		if (mv < idade)
			mv = idade;
		if ( curso == 'T' && uf == "MG")
			cmg = cmg +1;
		
		candidatos++;
		
		cout<<"digite sua idade (0 para sair): ";
	cin>>idade; 
	}
	cout<<endl;
	cout<<"A idade da pessoa mais velha é: "<<mv<<endl;
	cout<<"O total de candidatos mineiros com curso tecnico é: "<<cmg<<endl;
	cout<<"O total de candidatos foi de: "<<candidatos<<endl;
	
	return 0;
}

