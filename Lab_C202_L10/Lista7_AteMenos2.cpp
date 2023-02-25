#include <iostream>
#include <cmath>
#include <iomanip>
#include <locale>
#include <cstring>
using namespace std;

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	int num,soma=0;
	
	do
	{
		cout<<"Digite um numero (-2 para sair): ";
		cin>>num;
		soma = soma + num;
	}while (!(num == -2));
	
	cout<<soma<<endl;
	
	return 0;
}

