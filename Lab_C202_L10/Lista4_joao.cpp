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
	cout<<"digite a letra deseja (minuscula)"<<endl;
	cin>>letra;
	
	switch (letra)
	{
		case 'a':
			cout<<letra<<" eh vogal"<<endl;
			break;
		case 'e':
			cout<<letra<<" eh vogal"<<endl;
			break;
		case 'i':
			cout<<letra<<" eh vogal"<<endl;
			break;
		case 'o':
			cout<<letra<<" eh vogal"<<endl;
			break;
		case 'u':
			cout<<letra<<" eh vogal"<<endl;
			break;
		default:
			cout<<letra<<" não eh vogal"<<endl;
	}


	return 0;
}

