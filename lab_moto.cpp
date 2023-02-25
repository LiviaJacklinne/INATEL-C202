#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main ()
{
	float moto1, moto2, moto3, v1, v2, v3;

	cout << "Insira o modelo das motos	" << endl;
	
	cin >> moto1;
	cin >> moto2;
	cin >> moto3;

	v1 = (10 * moto1) - (4 / 3) * moto1;
	v2 = (10 * moto2) - (4 / 3) * moto2;
	v3 = (10 * moto3) - (4 / 3) * moto3;

	if (v1 > v2 && v1 > v3)
	{
		cout << " Moto 1" << endl;
	}
	else if (v2 > v3 && v2 > v1)
	{
		cout << "Moto 2" << endl;
	}
	else
	{
		cout << "Moto 3" << endl;
	}



	return 0;
}