#include <iostream>
#include <cmath>
#include <iomanip>
#include <locale>
#include <cstring>
using namespace std;

int fatorial (float numy)
{
	int i,fat=1;
	for (i=1; i<=numy; i++)
	{
		fat = fat * i;
	}
	return fat;
}

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	float numx;
	int resp;
	
	do
	{
		cout<<"Digite um valor positivo inteiro: ";
		cin>>numx;
	} while (!(numx > 0 && numx == floor (numx)));
	
	resp = fatorial(numx);
	
	cout <<"Fatorial = "<<resp<<endl;
	
	return 0;
}

