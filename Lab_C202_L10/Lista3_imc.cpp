#include <iostream>
#include <cmath>
#include <iomanip>
#include <locale>
#include <cstring>
using namespace std;

int main ()
{

	float altura, peso, imc;

	cout << "digite seu peso (KG) ";
	cin >> peso;
	cout << "digite sua altura (M) ";
	cin >> altura;


	imc = peso / (pow(altura, 2));

	if (imc < 18.5)
	{
		cout << fixed << setprecision (2) << imc << endl;
		cout << "BAIXO PESO " << endl;
	}
	else if (imc > 18.5 && imc < 24.9)
	{
		cout << fixed << setprecision (2) << imc << endl;
		cout << " PESO IDEAL " << endl;
	}
	else if (imc > 25.0 && imc < 29.9)
	{
		cout << fixed << setprecision (2) << imc << endl;
		cout << " SOBREPESO" << endl;
	}
	else if (imc > 30 && imc < 34.9)
	{
		cout << fixed << setprecision (2) << imc << endl;
		cout << " OBESIDADE I" << endl;
	}
	else if (imc > 35 && imc < 39.9)
	{
		cout << fixed << setprecision (2) << imc << endl;
		cout << " OBESIDADE II" << endl;
	}
	else
	{
		cout << fixed << setprecision (2) << imc << endl;
		cout << " OBESIDADE III" << endl;
	}



	return 0;
}

