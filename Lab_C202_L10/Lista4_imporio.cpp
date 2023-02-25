#include <iostream>
#include <cmath>
#include <iomanip>
#include <locale>
#include <cstring>
using namespace std;

int main ()
{
	setlocale(LC_ALL, "Portuguese");

	string nome, city, idade;
	float preco, pgmt;
	int codigo;

	cout << "1, queijo" << endl;
	cout << "2, geleia" << endl;
	cout << "3, doce" << endl;
	cout << "4, refrigerante" << endl;
	cout << "5, sorvete" << endl;
	cout << "6, presunto cru" << endl;
	cout << "7, vinho" << endl << endl;

	cout << "digite o codigo do produto: ";
	cin >> codigo;
	cout << "digite o preço do produto: ";
	cin >> preco;
	cout << "digite seu nome: ";
	cin.ignore();
	getline(cin, nome);
	cout << "digite sua cidade: ";
	getline(cin, city);
	cout << "digite sua idade: ";
	cin >> idade;
	
	
	cout << "pagamento: ";
	cin >> pgmt;
	

	switch (codigo)
	{
		if (preco < pgmt)
		{
		case 1:
		{
			cout << "Queijo" << endl;
			cout << "Valor total = R$ "<<fixed<<setprecision(2) << preco << endl;
			cout << "Troco = R$ "<<fixed<<setprecision(2) << pgmt - preco << endl;
			break;
		}
		case 2:
		{
			cout << "Geleia" << endl;
			cout << "Valor total = R$ "<<fixed<<setprecision(2) << preco << endl;
			cout << "Troco = R$ " <<fixed<<setprecision(2)<< pgmt - preco << endl;
			break;
		}
		case 3:
		{
			cout << "Doce" << endl;
			cout << "Valor total = R$ " <<fixed<<setprecision(2)<< preco << endl;
			cout << "Troco = R$ " <<fixed<<setprecision(2)<< pgmt - preco << endl;
			break;
		}
		case 4:
		{
			cout << "Refrigerante" << endl;
			cout << "Valor total = R$ " <<fixed<<setprecision(2)<< preco << endl;
			cout << "Troco = R$ " << pgmt - preco << endl;
			break;
		}
		case 5:
		{
			cout << "Sorvete" << endl;
			cout << "Valor total = R$ " <<fixed<<setprecision(2)<< preco << endl;
			cout << "Troco = R$ "<<fixed<<setprecision(2) << pgmt - preco << endl;
			break;
		}
		case 6:
		{
			cout << "Presunto cru" << endl;
			cout << "Valor total = R$ "<<fixed<<setprecision(2) << preco << endl;
			cout << "Troco = R$ "<<fixed<<setprecision(2) << pgmt - preco << endl;
			break;
		}
		case 7:
		{
			cout << "Vinho" << endl;
			cout << "Valor total = R$ " <<fixed<<setprecision(2)<< preco << endl;
			cout << "Troco = R$ "<<fixed<<setprecision(2) << pgmt - preco << endl;
			break;
		default:
			cout<<"opção invalida";
			break;
		}

	}
	else 
		cout<<"pagamento insuficiente"<<endl;
 
	}
	
	return 0;
}

