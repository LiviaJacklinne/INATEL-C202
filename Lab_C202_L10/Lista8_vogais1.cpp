#include <iostream>
#include <cmath>
#include <iomanip>
#include <locale>
#include <cstring>
using namespace std;

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	char vogais[] = {'a','e','i','o','u'};// ou "aeiou"
	char frase[17];
	int contador=0, x, y;

	//receber a frase
	cout << "Digite sua frase: ";
	cin.getline(frase, 17);

	//contar vogais
	for (x = 0; x <= strlen(frase); x++)
	{
		for (y = 0; y <= strlen(vogais); y++)
		{
			if (frase[x] == vogais[y] && frase[x] != 0)
			 contador++;
		}
	}
	cout  << contador << endl;
	
	return 0;
}

