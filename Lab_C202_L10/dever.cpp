#include <iostream>
#include <cmath>
#include <iomanip>
#include <locale>
#include <cstring>
using namespace std;

int main()
{
	setlocale (LC_ALL, "Portuguese");

	float aval, n; //avaliação, numero de pessoas
	int i, j, k; //variaveis de controle

	j = 0;
	k = 0;
	n = 0;

	cout << "digite o numero de pessoas que irão avaliar a loja: ";
	cin >> n;
	cout << "dê uma nota de 1 a 5 sobre nossa loja " << endl;
	cout << "1 - pessimo" << endl;
	cout << "2 - ruim" << endl;
	cout << "3 - regular" << endl;
	cout << "4 - bom" << endl;
	cout << "5 - 5 otimo" << endl << endl;


	for (i = 1; i <= n; i++)
	{

		cout << "digite sua avaliação: ";
		cin >> aval;

		if (aval == 5)
			k = k + 1;
		else if(aval == 1)
			j = j + 1;

	}
	cout << "percentual das avaliaçoes" << endl;
	cout << "otimo: " << k / n << endl;
	//cout << "pessimo: " << j / 4.0 << endl;

	return 0;


}
