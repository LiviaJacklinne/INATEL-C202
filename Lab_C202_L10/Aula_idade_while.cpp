#include <iostream>
#include <locale>
#include <cmath>
#include <iomanip>
#include <cstring>
using namespace std;


/* Aluna: Livia Jacklinne Ramos Moreira
   Matricula: 1731
   Turma: L10 */
   

int main ()
{
	setlocale(LC_ALL, "Portuguese");

	int idade , maior = 0 , menor = 123;

	cout << "Digite sua idade (0 para sair): ";
	cin >> idade;

	while(idade != 0)
	{
		if(idade < 0 || idade > 122)
		{
			cout << "Idade invalida. Digite outra idade: ";
			cin >> idade;
		}
		
			if(idade > maior)
			  maior = idade;
            if(idade < menor)
			  menor = idade;
		
	    cout << "Digite sua idade (0 para sair): ";
		cin >> idade;
	}
	cout << endl;
	if(menor != 0 && maior !=0)
	{
		cout << "A maior idade �: " << maior << endl;
		cout << "A menor idade �: " << menor << endl;
	}
	else
		cout << "N�o foi digitado nenhuma idade" << endl;

	return 0;
}
