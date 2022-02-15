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

	cout << "Digite um n�mero(-9999 para sair): ";
	cin >> num;
	while(num != -9999)
	{
		if(num > maiornum)
			maiornum = num;

		if (num < menornum)
			menornum = num ;
		cont++;

		cout << "Digite um n�mero(-9999 para sair): ";
		cin >> num;
	}

	if(cont!=0)
	{
		cout << "Maior n�mero: " << maiornum << endl;
		cout << "Menor n�mero: " << menornum << endl;
		cout<< "O total de n�meros lidos foi: "<<cont<<endl;
	}
	else
	{
		cout<<"Nenhum n�mero foi lido"<<endl;
	}

	return 0;
}

