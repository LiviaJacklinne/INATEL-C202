#include <iostream>
#include <cmath>
#include <iomanip>
#include <locale>
#include <cstring>
using namespace std;

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	int i, n,vet[i],k=0;
	
	cout<<"Digite quantas posiçoes você deseja que seu vetor tenha: ";
	cin>>n;
	for(i=0; i<n; i++)
	{
		cout<<"Digite o numero da posição "<<i<<": ";
		cin>>vet[i];
		
	}
	
	for(i=0; i<n; i++)
	{
		if(vet[i] <0)
		{
			vet[i]=0;
			k++;
		}
		cout<<vet[i]<<endl;
	}
	cout<<"Total de numeros negativos: "<<k<<" ";
	
	return 0;
}

