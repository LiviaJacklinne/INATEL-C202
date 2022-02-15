#include <iostream>
#include <cmath>
#include <iomanip>
#include <locale>
#include <cstring>
using namespace std;

float num;
int impar_par(int numx)
{
	if (numx % 2 == 0)
		return 2;
	else return 1;
}
void modulo (int numz)
{
	if (numz < 0)
		cout<<"Modulo = "<<numz*-1<<endl;
	else cout<<"Modulo = "<<numz<<endl;
}
void tabuada ()
{
	int i;
	for(i=1; i<=10; i++)
		cout<<num<<" x "<<i<<" = "<<num*i<<endl;	
}

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	int numy;

	do
	{
		cout << "Digite seu numero: ";
		cin >> num;
	} while (!(num == floor (num) && num !=0));
	numy = num;
	if (impar_par(numy)== 2)
		cout<<"Par"<<endl;
	else cout<<"Impar"<<endl;
	modulo(numy);
    tabuada();

	return 0;
}

