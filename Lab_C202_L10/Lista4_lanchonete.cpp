#include <iostream>
#include <cmath>
#include <iomanip>
#include <locale>
#include <cstring>
using namespace std;

int main ()
{
	setlocale(LC_ALL, "Portuguese");

	int menu, quantidade;
	
	cout<<"op��o 1, Cachorro Quente R$ 3.00"<<endl;
    cout<<"op��o 2, X - Salada R$ 5.50 "<<endl;
	cout<<"op��o 3, X - Bacon R$ 6.00 "<<endl;
	cout<<"op��o 4, Torrada simples R$ 3.00"<<endl;
	cout<<"op��o 5, Refrigerante R$ 2.50 "<<endl;
	cout<<"digite a op��o que deseja "<<endl;
	cin>>menu;
	cout<<"digite a quantidade que deseja"<<endl;
	cin>>quantidade;
	
	switch (menu)
	{
		case 1:
			cout<<"Total: R$ "<<fixed<<setprecision(2)<<3.00*quantidade<<endl;
			break;
		case 2:
			cout<<"Total: R$ "<<fixed<<setprecision(2)<<5.50*quantidade<<endl;
			break;
		case 3:
			cout<<"Total: R$ "<<fixed<<setprecision(2)<<6.00*quantidade<<endl;
			break;
		case 4:
			cout<<"Total: R$ "<<fixed<<setprecision(2)<<3.00*quantidade<<endl;
			break;
		case 5:
			cout<<"Total: R$ "<<fixed<<setprecision(2)<<2.50*quantidade<<endl;
			break;
		default:
			cout<<"op��o invalida"<<endl;
	}
	
	return 0;
}

