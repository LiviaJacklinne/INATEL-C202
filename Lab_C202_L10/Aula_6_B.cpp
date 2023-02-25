#include <iostream>
#include <cmath>
#include <iomanip>
#include <locale>
#include <cstring>
using namespace std;

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	int l, c;
	float mat[4][4];

	for(l = 0; l < 4; l++)
	{
		for(c = 0; c < 4; c++)
		{
			cout << "Digite o valor da linha " << l << " coluna " << c << ": ";
			cin >> mat[l][c];
		}
		cout << endl;
	}
	cout << endl;
	cout << "Elementos da diagonal principal: ";

	for(l = 0; l < 4; l++)
	{
		for(c = 0; c < 4; c++)
		{
			if (c == l)
				cout << mat[l][c] << " ";
		}
	}

	cout << "Matriz transposta" << endl;
	for(l = 0; l < 4; l++)
	{
		for(c = 0; c < 4; c++)
		{
			cout << mat[c][l] << " ";
		}
		cout << endl;
	}




	return 0;
}

