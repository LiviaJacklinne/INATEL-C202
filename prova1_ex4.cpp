#include <iostream>
#include <cmath>
#include <iomanip>
#include <locale>
#include <cstring>
using namespace std;

int main( )
{
	setlocale (LC_ALL, "Portuguese");

	float num1, num2, num3, fim;
	int n, i, menu; //variavel de controle
	i = 0;

	cout << "quantas vezes voc� deseja que o menu seja exibido? ";
	cin >> n;

	while (i < n)
	{
		i++;
		cout << "1- M�dia dos 3 n�meros com pesos 2, 3 e 5" << endl;
		cout << "2- O maior entre os 3 n�meros" << endl;
		cout << "digite sua op��o: ";
		cin >> menu;
		cout << endl;

		if(menu == 1)
		{
			cout << "insira 3 numeros distintos: ";
			cin >> num1 >> num2 >> num3;
			fim = ((num1 / 2.0) + (num2 / 3.0) + (num3 / 5.0)) / 3;
			cout << "valor calculado = " << fim << endl;

		}
		else if(menu == 2)
		{
			cout << "insira 3 numeros distintos: ";
			cin >> num1 >> num2 >> num3;
			if (num1 > num2 && num1 > num3)
				cout << "o maior entre eles � = " << num1 << endl<<endl;
			else if(num2 > num3 && num2 > num1)
				cout << "o maior entre eles � = " << num2 << endl<<endl;
			else
				cout << "o maior entre eles � = " << num3 << endl<<endl;

		}
		else
			cout << "sua op��o � invalida" << endl<<endl;
	}


	return 0;
}
