#include <iostream>
#include <cmath>
#include <iomanip>
#include <locale>
#include <cstring>
using namespace std;

int main ()
{
	setlocale(LC_ALL, "Portuguese");

	float A, B;
	int OP;

	cout << "1 operacional * " << endl;
	cout << "2 operacional / " << endl;
	cout << "3 operacional - " << endl;
	cout << "4 operacional + " << endl;
	cout << "digite seu operacional " << endl;
	cin >> OP;
	cout << "digite os numeros " << endl;
	cin >> A >> B;

	switch(OP)
	{
	case 1:
		cout << "resultado " << A*B << endl;
		break;
	case 2:
	{
		if (A == 0 || B == 0)
			cout << "error " << endl;
		else cout << "resultado " << A / B << endl;
	}
	break;
	case 3:
		cout << "resultado " << A - B << endl;
		break;
	case 4:
		cout << "resultado " << A + B << endl;
	default:
		cout << "operador invalido" << endl;
		break;
	}
	return 0;
}

