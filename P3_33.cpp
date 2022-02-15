#include <iostream>
#include <iostream>
#include <cmath>
#include <locale>
#include <cstring>
using namespace std;

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	
	float vm; // venda mensal
	float preat; // preço atual
	
	cout<<"digite a venda mensal e o preço do produto "<< endl;
	cin>> vm>> preat;
	
	
	if (vm < 500 && preat < 30)
	{
		cout<<"reajuste de mais 10%, R$"<< preat + (preat*10/100)<<endl;
	}
	else if (vm >= 500 && vm < 1200 && preat >= 30 && preat <80)
	{
		cout <<"reajuste de mais 15%, R$ "<< preat + (preat*15/100)<<endl;
	}
	else if (vm >= 1200 && preat >= 80)
	{
		cout<<"reajuste de menos 20%, R$ "<< preat - (preat* 20/100)<<endl;
	}
	else 
	{
		cout<<"não foi possivel alterar o preço do produto"<<endl;
	}
    return 0;	
}