#include <iostream>
#include <cmath>
#include <iomanip>
#include <locale>
#include <cstring>
using namespace std;

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	
    int mes;
	cout<<"digite um numero de 1 a 12"<<endl;
	cin>>mes;
	
	switch(mes)
	{
	case 1:
		cout<<"janeiro"<<endl;
		break;
	case 2:
		cout<<"fevereiro"<<endl;
		break;
	case 3:
		cout<<"março"<<endl;
		break;
	case 4:
		cout<<"abril"<<endl;
		break;
	case 5:
		cout<<"maio"<<endl;
		break;
	case 6:
		cout<<"junho"<<endl;
		break;
	case 7:
		cout<<"julho"<<endl;
		break;
	case 8:
		cout<<"agosto"<<endl;
		break;
	case 9:
		cout<<"setembro"<<endl;
		break;
	case 10:
		cout<<"outubro"<<endl;
		break;
	case 11:
		cout<<"novembro"<<endl;
		break;
	case 12:
		cout<<"dezembro"<<endl;
		break;
	default:
		cout<<"opção invalida"<<endl;
		break;
	}

	return 0;
}

