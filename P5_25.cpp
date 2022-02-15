#include <iostream>
#include <cmath>
#include <iomanip>
#include <locale>
#include <cstring>
using namespace std;

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	float mat[12][4], total[4], soma = 0, vendas;
	int l, c;
	string mes[12];
	mes[0] = "Janeiro" , mes[1] = "Fevereiro", mes[2] = "Março", mes[3] = "Abril";
	mes[4] = "Maio", mes[5] = "Junho", mes[6] = "Julho", mes[7] = "Agosto";
	mes[8] = "Setembro", mes[9] = "Outubro", mes[10] = "Novembro", mes[11] = "Dezembro";

	for(l = 0; l < 4; l++)
	{
		vendas = 0;
		for(c = 0; c < 4; c++)
		{
			cout << "Digite o valor de vendas do mes " << l << " semana " << c << ": ";
			cin >> mat[l][c];
			soma = soma + mat[l][c];
			vendas = vendas + mat[l][c];
		}
		total[l] = vendas;
		cout << endl;
	}

	for(l = 0; l < 4; l++)
		cout << "Venda total do mes " << mes[l] << ": R$ " << total[l] << endl;
	cout << "Venda total do ano: R$ " << soma/12 << endl;

	return 0;
}

