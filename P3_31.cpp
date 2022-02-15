#include <iostream>
#include <cmath>
#include <iomanip>
#include <locale>
#include <cstring>
using namespace std;

int main ()
{
	setlocale(LC_ALL, "Portuguese");

	float x, y;

	cout << "digite o valor de x e y ";
	cin >> x;
	cin >> y;

	if (x > y)
	{
		cout << pow(x, 2) - pow(y, 2) + 2 * x*y << endl;

	}
	else if (x == y)
	{
		cout << 2 * x*y + x + y << endl;
	}
	else 
	{
		cout << pow (x, 2) + pow(y, 2) + 2 * x*y << endl;
	}

	return 0;
}

