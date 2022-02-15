#include <iostream>
#include <cmath>
#include <iomanip>
#include <locale>
#include <cstring>
using namespace std;

float numa,numb;
void soma ()
{
	int i, soma=0;
	if(numa < numb)
	{
		for(i = numa + 1; i <= numb -1; i++)
			soma = soma + i;
			cout<<"Soma = "<<soma<<endl;
	}
	if(numa > numb)
	{
		for(i = numb + 1; i <= numa -1; i++)
			soma = soma + i;
			cout<<"Soma = "<<soma<<endl;
	}
		
}

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	
	do
	{
		cout<<"Digite o valor do primeiro numero (inteiro diferente de 0): ";
		cin>>numa;
	} while(!(numa != 0 && numa == floor(numa)));
	
	do
	{
		cout<<"Digite o segundo numero (inteiro != 0 e != do numero anterior): ";
		cin>>numb;
	} while(!(numb != 0 && numb == floor(numb) && numb != numa));
	
	soma();
	

	return 0;
}

