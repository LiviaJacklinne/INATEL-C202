#include <iostream>
#include <cmath>
#include <iomanip>
#include <locale>
#include <cstring>
using namespace std;

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	
	char letra;
	
	cout<<"op��o a, Am�rica"<<endl;
	cout<<"op��o b, Europa"<<endl;
	cout<<"op��o c, Asia"<<endl;
	cout<<"op��o d, Africa"<<endl;
	cout<<"op��o e, Oceania"<<endl;
	cout<<"op��o f, Antartida"<<endl;
	cout<<"digite sua op��o"<<endl;
	cin>>letra;
	

	
	
	switch (letra)
	{
		case 'a':
		cout<<"America"<<endl;
		break;
	case 'b':
		cout<<"Europa"<<endl;
		break;
	case 'c':
		cout<<"Asia"<<endl;
		break;
	case 'd':
		cout<<"Africa"<<endl;
		break;
	case 'e':
		cout<<"Oceania"<<endl;
		break;
	case 'f':
		cout<<"Antartida"<<endl;
		break;
	default:
		cout<<"op��o invalida"<<endl;
	}


	return 0;
}

