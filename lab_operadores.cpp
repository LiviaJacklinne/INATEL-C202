#include <iostream>
#include <cmath>
#include <iomanip>
#include <locale>
#include <cstring>
using namespace std;

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	
    float x,y;
	char operacao;
	cout<<"operação 1 +"<<endl;
	cout<<"operação 2 -"<<endl;
	cout<<"operação 3 *"<<endl;
	cout<<"operação 4 /"<<endl;
	cout<<"digite seu operador ";
	cin>>operacao;
	cout<<"digite seus valores de x e y ";
	cin>>x>>y;
	
	switch(operacao)
	{
	case '+':
		cout<<fixed<<setprecision(2)<<pow (y,2)+2<<endl;
		break;
	case '-':
		cout<< x-y  <<fixed<<setprecision(2)<<endl;
		break;
	case '*':
		cout<<fixed<<setprecision(2)<< 3* pow(x, (1/5.0))  <<endl;
		break;
	case '/':
		cout<<fixed<<setprecision(2)<<x /3<<endl;
		break;
	default:
		cout<<"opçao invalida"<<endl;
		break;
	}
	

	return 0;
}

