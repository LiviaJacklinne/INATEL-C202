#include <iostream>
#include <cmath>
#include <iomanip>
#include <locale>
#include <cstring>
using namespace std;

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	int ano, origem, mcap, motint, mv, idade, anoatual; //mcap = mulher da capital
	//motint = motoristas do interior com mais de 60 anos
	//mv = mulher mais velha que 60
	char sexo;
	float qtotal, qparcial;
	qparcial = 0;
	qtotal = 0;
	mcap = 0;
	motint = 0;
	mv = 0;

	cout << "digite o ano atual: ";
	cin >> anoatual;

	
		cout << "Digite o ano que voce nasceu (0 para sair): ";
		cin >> ano;
		idade = anoatual - ano;
	

	while(ano > 0)
	{

		cout << "digite seu sexo (M = Masc/ F = Fem): ";
		cin >> sexo;
		cout << "De onde voce vem? (0 = Capital/ 1 = Interior/ 2 = Outro estado): ";
		cin >> origem;
		if (idade < 21)
			qparcial++;
		if (sexo == 'F' && origem == 0)
			mcap++;
		if (idade > 60 && origem == 1)
			motint++;
		if (sexo == 'F' && idade > 60)
			mv++;

		qtotal++;

		cout << "Digite o ano que voce nasceu (0 para sair): ";
		cin >> ano;
		idade = anoatual - ano;

	}
	

	if(qtotal > 0)
	{
		cout << endl;
		cout << "Porcentagem de motoristas com menos de 21 anos: " << (qparcial * 100) / qtotal;
		cout << "%"<< endl;
		cout << "Total de mulheres da capital: " << mcap << endl;
		cout << "Total de motoristas do interior com mais de 60 anos: " << motint << endl;
		cout << "Total de mulheres com mais de 60 anos: " << mv << endl;
	}
	else
		cout << "Nenhum ano foi lido" << endl;



	return 0;
}

