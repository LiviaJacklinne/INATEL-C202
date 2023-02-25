#include <iostream>
#include <cmath>
#include <iomanip>
#include <locale>
#include <cstring>
using namespace std;

/* 
   Nome: Livia Jacklinne Ramos Moreira
   Matricula: 1731
   Turma L10 
*/




int main ()
{
	setlocale(LC_ALL, "Portuguese");
	int idade, maior=0, menor;


	do
	{
		do
		{
			cout << "Digite sua idade (0 para sair): ";
			cin >> idade;
			if (idade >= 0 && idade < 122)
			{
				if(idade > maior)
				   maior = idade;
			   
				if (idade < menor);
				    menor = idade;
			}
			
		}while (!(idade >= 0 && idade < 122));

	}while (!(idade == 0));

	if(maior != 0)
	{
		cout << "Maior idade: " << maior << endl;
		cout << "Menor idade: " << menor << endl;
	}
	else cout << "Não foi lida nenhuma idade" << endl;

	return 0;
}

