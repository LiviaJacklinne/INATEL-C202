#include <iostream>
#include <cmath>
#include <iomanip>
#include <locale>
#include <cstring>
using namespace std;

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	char nome1[100], nome2[100], nome3[100];
	int tamanho1, tamanho2;
	
	cout<<"Digite o primeiro nome: ";
	cin.getline(nome1,100);
	cout<<"Digite o segundo nome: ";
	cin.getline(nome2,100);
	cout<<endl;
    if(strcmp(nome1,nome2)==0)
		cout<<"Os nomes são iguais"<<endl;
	else cout<<"Os nomes são diferentes"<<endl;
	cout<<endl;
	tamanho1 = strlen(nome1);
    tamanho2 = strlen(nome2);	
    cout<<"Tamanho do primeiro nome: "<<tamanho1<<endl;
    cout<<"Tamanho do segundo nome: "<<tamanho2<<endl<<endl;
    
		strcpy(nome3,nome2);
	cout<<"Copia do segundo nome: "<<nome3<<endl;
	
	return 0;
}

