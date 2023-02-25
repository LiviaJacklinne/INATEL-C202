#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
	float soma;
	int num, k;
	soma = 0;
	k = 0;

	while(num >=0)
	{
		cout << "digite um numero: ";
		cin >> num;
		if (num >= 0)
		{
			soma = soma + num;
			k++;
		}
	}

	if (soma != 0)
		cout << fixed << setprecision(2) << soma / k << endl;
	else 
	   cout<<"0.00"<<endl;

	return 0;

}
