#include <iostream>
#include <cmath>
#include <iomanip>
#include <locale>
#include <cstring>
using namespace std;

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	int l, c, linha, coluna;

	cout << "Digite a dimensão da sua matriz, linha: ";
	cin >> linha;
	cout << "Coluna: ";
	cin >> coluna;

	float matA [linha][coluna], matB [linha][coluna], matC[linha][coluna];

	cout << "Primeira matriz" << endl;
	for(l = 0; l < linha; l++)
	{
		for(c = 0; c < coluna; c++)
		{
			cout << "Digite o valor da linha " << l << " coluna " << c << ": ";
			cin >> matA[l][c];
		}
		cout << endl;
	}
	cout << endl;

	cout << "Segunda matriz" << endl;
	for(l = 0; l < linha; l++)
	{
		for(c = 0; c < coluna; c++)
		{
			cout << "Digite o valor da linha " << l << " coluna " << c << ": ";
			cin >> matB[l][c];
		}
		cout << endl;
	}

	for(l = 0; l < linha; l++)
		for(c = 0; c < coluna; c++)
			matC[l][c] = matA [l][c] + matB[l][c];

	cout << "Matriz soma" << endl;
	for(l = 0; l < linha; l++)
	{
		for(c = 0; c < coluna; c++)
			cout << matC[l][c] << " ";
		cout << endl;
	}





	return 0;
}

