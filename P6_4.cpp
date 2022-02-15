#include <iostream>
#include <cmath>
#include <iomanip>
#include <locale>
#include <cstring>
using namespace std;

float num; //variavel global
void primo(); // prototipo da função

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	for(int j = 1; j < 7; j++)
	{
		do
		{
			cout << "Digite um numero inteiro positivo: ";
			cin >> num;
		}
		while (!(num >= 0 && num == floor(num)));

		primo();//chamada da função

	}
	return 0;
}
void primo()
{
	int i, qd;
	int num_int;
	num_int = num;
	qd = 0;
	for(i = 1; i <= num; i++)
	{
		if (num_int % i == 0)
			qd = qd + 1;
	}
	if (qd == 2)
		cout << "O numero " << num << " é primo" << endl;
	else cout << "O numero " << num << " não é primo" << endl;
}
