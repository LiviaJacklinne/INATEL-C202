#include <iostream>
#include <cmath>
#include <iomanip>
#include <locale>
#include <cstring>
using namespace std;

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	int l, c, d, k = 0;

	cout << "Digite a dimensão da sua matriz: ";
	cin >> d;

	float mat [d][d];

	for(l = 0; l < d; l++)
	{
		for(c = 0; c < d; c++)
		{
			cout << "Digite o valor da linha " << l << " coluna " << c << ": ";
			cin >> mat[l][c];
		}
		cout << endl;
	}
	cout << endl;
	
	for(l = 0; l < d; l++)
		for(c = 0; c < d; c++)
			if (c != l)
				if(mat[l][c] == 0)
					k++;
    cout<<endl;
	if((d * d) - d == k)
		cout << "Sim" << endl;
	else cout << "Nao" << endl;

	return 0;
}

