#include <iostream>
#include <cmath>
#include <iomanip>
#include <locale>
#include <cstring>
using namespace std;

float num;
void tabuada()
{
	int i;
	for(i=1; i<=10; i++)
		cout<<num<<" x "<<i<<" = "<<num*i<<endl;
	
	return;
}

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	
	do
	{
		cout<<"Digite um numero inteiro: ";
		cin>>num;
	} while (!(num == floor(num)));
	
	tabuada();

	return 0;
}

