#include <iostream>
#include <locale>
#include <cmath> 
#include <iomanip>
#include <cstring>

using namespace std;
int main ()
{
	setlocale(LC_ALL, "Portuguese");

	int idade , maior = 0 , menor = 123;

	cout << " Digite sua idade: ";
	cin >> idade;

	while (idade < 0 || idade > 122)
	{
		cout << " Idade inválida. Digite outra idade: ";
		cin >> idade;
	}

	while(idade != 0)
	{
		if(idade > maior)
			maior = idade;
				
		if(idade < menor)
	      menor = idade;
		
		cout <<"Digite sua idade (0 para sair): ";
		cin >> idade;

		while (idade < 0 || idade > 122)
		{
			cout << "Idade invalida. Digite outra idade: ";
			cin >> idade;
		}
	}
	
	if(menor != 0 && maior != 0)
	{
		cout<<"A maior idade é: "<<maior<<endl;
        cout<<"A menor idade é: "<<menor<<endl;
	}
	else 
		cout <<"Não foi digitada nenhuma idade"<<endl;
	return 0;
}
