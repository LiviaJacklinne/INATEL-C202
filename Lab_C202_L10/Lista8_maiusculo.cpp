#include <iostream>
#include <cmath>
#include <iomanip>
#include <locale>
#include <cstring>
using namespace std;

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	int num,gnd;
	cout<<"Digite quantos caracteres tem seu nome (incluindo o espa�o): ";
	cin>>num;
	char nome[num];
	cout<<"Digite seu nome: ";
	
	cin.getline(nome,num);
	gnd = isupper( nome); 
	cout<<"O total de letra maiuscula �: "<<gnd<<endl;
	
	return 0;
}

