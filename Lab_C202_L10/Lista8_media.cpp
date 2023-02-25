#include <iostream>
#include <cmath>
#include <iomanip>
#include <locale>
#include <cstring>
using namespace std;

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	int i,n,soma=0;
	float media;
	
	cout<<"Digite a quantidade de vezes que voce deseja que o programa repita: ";
	cin>>n;
	int vet[n]; 
	
	for (i=0; i<n; i++)
	{
		cout<<"Digite o valor da posição "<<i<<": ";
		cin>>vet[i];
		soma = soma + vet[i];
	}
	media = soma/(n*1.0);
	cout<<"Media: "<<fixed<<setprecision(2)<<media<<endl;
	cout<<"Maiores que a media: ";
	for (i=0;i<n; i++)
	{
		if(vet[i] >media)
		cout<<vet[i]<<" ";	
	}
	return 0;
}