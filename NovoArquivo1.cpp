#include <iostream>
#include <cmath>
#include <iomanip>
#include <locale>
#include <cstring>
using namespace std;

int main ()
{
	setlocale(LC_ALL, "Portuguese");

	int i; // vari�vel de controle do for
	float num, soma, maior;
	soma = 0;
	maior = 0; // vari�veis acumulativa e comparativa inicializadas
	for (i = 1; i <= 10; i = i + 1)
	{

		cout << "Entre com um n�mero qualquer >0 ";
		cin >> num;

		soma = soma + num; // soma dos n�meros
		if (num > maior) // l�gicca de maior
			maior = num;
	}

	cout << "A soma dos 10 n�meros � " << soma << endl;
	cout << "O maior deles � " << maior << endl;


return 0;
}

