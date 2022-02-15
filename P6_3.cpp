#include <iostream>
#include <cmath>
#include <iomanip>
#include <locale>
#include <cstring>
using namespace std;

float media (float x, float y, float z, char letra)
{
	if (letra == 'A')
	{
		return ((x * 0.5) + (y * 0.3) + (z * 0.2));
	}
	else return (x + y + z) / 3;
}

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	char nome;
	float n1, n2, n3;

	for(int i = 1; i <= 3; i++)
	{
		cout << "Digite uma letra referente ao aluno: ";
		cin >> nome;
		do
		{
			cout << "Digite a primeira nota do aluno (entre 0 e 100): ";
			cin >> n1;
		}
		while (!(n1 >= 0 && n1 <= 100));
		do
		{
			cout << "Digite a segunda nota do aluno (entre 0 e 100): ";
			cin >> n2;
		}
		while (!(n2 >= 0 && n2 <= 100));
		do
		{
			cout << "Digite a terceira nota do aluno (entre 0 e 100): ";
			cin >> n3;
		}
		while (!(n3 >= 0 && n3 <= 100));

		cout << "Media = " << media(n1, n2, n3,nome) << endl;
	}
	
	return 0;
}

