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
	
	cout<<"opção a, América"<<endl;
	cout<<"opção b, Europa"<<endl;
	cout<<"opção c, Asia"<<endl;
	cout<<"opção d, Africa"<<endl;
	cout<<"opção e, Oceania"<<endl;
	cout<<"opção f, Antartida"<<endl;
	cout<<"digite sua opção"<<endl;
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
		cout<<"opção invalida"<<endl;
	}


	return 0;
}

