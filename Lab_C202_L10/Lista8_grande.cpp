#include <iostream>
#include <cmath>
#include <iomanip>
#include <locale>
#include <cstring>
using namespace std;

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	int i, cont = 0,num;

	cout<<"Digite quantas letras tem seu nome (incluindo o espaço): ";
	cin>>num;
	
	char nome[num];
	
	cin.ignore();
	cout << "Digite seu nome: ";
	cin.getline(nome,num+1);
	
	for(i = 0; i < strlen(nome); i++)
		if(isupper(nome[i]) != 0)
			cont++;
	cout << "O total de letra maiuscula é: " << cont << endl;

	return 0;
}
