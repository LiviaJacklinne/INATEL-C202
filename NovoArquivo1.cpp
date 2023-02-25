#include <iostream>
#include <cmath>
#include <iomanip>
#include <locale>
#include <cstring>
using namespace std;

int main ()
{
	setlocale(LC_ALL, "Portuguese");

	int i; // variável de controle do for
	float num, soma, maior;
	soma = 0;
	maior = 0; // variáveis acumulativa e comparativa inicializadas
	for (i = 1; i <= 10; i = i + 1)
	{

		cout << "Entre com um número qualquer >0 ";
		cin >> num;

		soma = soma + num; // soma dos números
		if (num > maior) // lógicca de maior
			maior = num;
	}

	cout << "A soma dos 10 números é " << soma << endl;
	cout << "O maior deles é " << maior << endl;


return 0;
}

