#include <iostream>
#include <cmath>
#include <iomanip>
#include <locale>
#include <cstring>
using namespace std;

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	float media,soma=0,desvio,somad=0,conta,expo, vet [5];
	int i;
	
	for(i=0; i<5; i++)
	{
		cout<<"Digite um valor para a posição "<<i<<": ";
		cin>>vet[i];
		soma = soma +vet[i];
	}
	media = soma/5;
	
	for (i=0; i<5; i++)
	{
		conta = (vet[i] - media);
		expo = pow(conta,2);
		somad = somad + expo;
	}
 
    desvio = sqrt(somad/(5-1));
    
    cout<<"O desvio padrão é de: "<<desvio<<endl;
	
	
	return 0;
}

