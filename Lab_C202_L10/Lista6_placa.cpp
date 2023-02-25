#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
	float usu1, usu2, emp1, emp2; //usu = dados do usuario, emp= dados da empresa
	int pedidos, cont; //
	cont = 1;

	cout << "dados disponivel da empresa: ";
	cin >> emp1 >> emp2;
	cout << "quantos pedidos voce deseja: ";
	cin >> pedidos;

	if(pedidos <= 105)
	{
		while(cont <= pedidos)
		{
			cont++;
			cout << "dados do usuario: ";
			cin >> usu1 >> usu2;

			if(usu1 <= emp1 && usu2 <= emp2)
				cout << "Sim" << endl;
			else if (usu1 <= emp2 && usu2 <= emp1)
				cout<<"Sim"<<endl;
			else
				cout << "Nao" << endl;
		}
	}

	return 0;
}
