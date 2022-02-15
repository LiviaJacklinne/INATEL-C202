#include <iostream>
#include <cmath>
#include <iomanip>
#include <locale>
#include <cstring>
using namespace std;

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	float num, maiornum, menornum;
	int cont = 0;

	cout << "Digite um número(-9999 para sair): ";
	cin >> num;
	while(num != -9999)
	{
		if(num > maiornum)
			maiornum = num;

		if (num < menornum)
			menornum = num ;
		cont++;

		cout << "Digite um número(-9999 para sair): ";
		cin >> num;
	}

	if(cont!=0)
	{
		cout << "Maior número: " << maiornum << endl;
		cout << "Menor número: " << menornum << endl;
		cout<< "O total de números lidos foi: "<<cont<<endl;
	}
	else
	{
		cout<<"Nenhum número foi lido"<<endl;
	}

	return 0;
}

