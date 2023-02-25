#include <iostream>
#include <cmath>
#include <iomanip>
#include <locale>
#include <cstring>
using namespace std;

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	int n, i,maior=-999999, menor= 9999999,pmaior,pmenor;
	
	cout<<"Digite quantas vezes deseja que o programa repita: ";
	cin>>n;
	
	int vet[n];
	for(i=0; i<n; i++)
	{
		cout<<"Digite o valor da posição "<<i<<": ";
		cin>>vet[i];
		if(vet[i]<menor)
		{
			pmenor = i;	
			menor = vet[i];
		}
		if(vet[i]> maior)
		{
			maior = vet[i];
			pmaior=i;
		}
	}
	cout<<"Pos Menor: "<<pmenor<<endl;
	cout<<"Valor Menor: "<<menor<<endl;
	cout<<"Pos Maior: "<<pmaior<<endl;
	cout<<"Valor Maior: "<<maior<<endl;
	
	
	return 0;
}

