#include <iostream>
#include <cmath>
#include <iomanip>
#include <locale>
#include <cstring>
using namespace std;

/* 
   Nome: Livia Jacklinne Ramos Moreira
   Matricula: 1731
   Turma: L10
*/   

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	int n, par=0, impar=0,v;// v = vetor
	
	cout<<"Digite quantos valores deseja digitar: ";
	cin>>n;
	int vet [n];
	
	for(v=0 ; v<n; v++)
	{
		cout<<"Digite o numero da posição "<<v<<": ";
		cin>>vet[v];
	}
	cout<<"Numeros pares: ";
	for(v=0 ; v<n; v++)
	{
		if(vet[v] % 2 ==0)
		{
			cout<<vet[v]<<" ";
			par++;
		}
	}
	cout<<endl;
	cout<<"Numeros impares: ";
	for(v=0 ; v<n; v++)
	{
		if(vet[v] % 2 !=0)
		{
			cout<<vet[v]<<" ";
			impar++;
		}
	}
	cout<<endl;
	if(par!=0)
	cout<<"O total de numeros pares é: "<<par<<endl;
   else 
   	cout<<"Não foi digitado nenhum numero par"<<endl;
   if(impar!=0)
	cout<<"O total de numeros impares é: "<<impar<<endl;
   else 
   	cout<<"Não foi digitado nenhum numero impar"<<endl;
		
	return 0;
}

