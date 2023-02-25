#include <iostream>
#include <cmath>
#include <iomanip>
#include <locale>
#include <cstring>
using namespace std;

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	int codigo, quantidade;
	float total;
	
	do
	{
		cout<<"Digite o codigo (1 a 5): ";
		cin>>codigo;
	} while (!(codigo >= 1 && codigo <= 5));
	do 
	{
		cout<<"Digite a quantidade (maior que 0): ";
		cin>> quantidade;
	} while (!(quantidade > 0));
	
	if(codigo == 1)
		total = quantidade * 3;
	else if (codigo == 2)
		total = quantidade * 5;
	else if (codigo == 3)
		total = quantidade * 6;
	else if (codigo == 4)
		total = quantidade * 3;
	else if (codigo == 5)
		total = quantidade * 2.5;
	cout<<fixed<<setprecision(2)<<"Total: R$ "<<total<<endl;
	
	return 0;
}

